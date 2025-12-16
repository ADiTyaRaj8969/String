"""
Task 36: Search multiple patterns using Aho–Corasick algorithm.
Input: N (int), N pattern lines, then one text line.
Output: for each pattern print YES/NO.
"""
import sys
from collections import deque

def aho_corasick(patterns, text):
    # lowercase letters only in this simple implementation
    K = 26
    trie = [{'next': [-1]*K, 'link': 0, 'out': []}]
    for i,p in enumerate(patterns):
        v=0
        for ch in p.lower():
            if not ch.isalpha(): continue
            c = ord(ch)-97
            if trie[v]['next'][c] == -1:
                trie[v]['next'][c] = len(trie)
                trie.append({'next': [-1]*K, 'link':0, 'out':[]})
            v = trie[v]['next'][c]
        trie[v]['out'].append(i)
    q = deque()
    for c in range(K):
        u = trie[0]['next'][c]
        if u != -1:
            trie[u]['link'] = 0
            q.append(u)
        else:
            trie[0]['next'][c] = 0
    while q:
        v = q.popleft()
        for c in range(K):
            u = trie[v]['next'][c]
            if u != -1:
                trie[u]['link'] = trie[trie[v]['link']]['next'][c]
                trie[u]['out'] += trie[trie[u]['link']]['out']
                q.append(u)
            else:
                trie[v]['next'][c] = trie[trie[v]['link']]['next'][c]
    found = [False]*len(patterns)
    v = 0
    for ch in text.lower():
        if not ch.isalpha(): v = 0; continue
        v = trie[v]['next'][ord(ch)-97]
        for idx in trie[v]['out']: found[idx] = True
    return found

if __name__ == '__main__':
    data = sys.stdin.read().splitlines()
    if not data: sys.exit(0)
    n = int(data[0])
    patterns = data[1:1+n]
    text = data[1+n] if len(data) > 1+n else ''
    res = aho_corasick(patterns, text)
    for r in res: print('YES' if r else 'NO')

# Time Complexity: O(sumlen + textlen)
# Space Complexity: O(sumlen)
