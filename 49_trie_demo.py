"""
Task 49: Trie insert/search demonstration.
Reads N, then N words to insert, then a query word and prints YES/NO if present.
"""
import sys

class TrieNode:
    def __init__(self):
        self.next = {}
        self.end = False

class Trie:
    def __init__(self): self.root = TrieNode()
    def insert(self, word):
        node = self.root
        for ch in word:
            ch = ch.lower()
            if ch not in node.next: node.next[ch] = TrieNode()
            node = node.next[ch]
        node.end = True
    def search(self, word):
        node = self.root
        for ch in word:
            ch = ch.lower()
            if ch not in node.next: return False
            node = node.next[ch]
        return node.end

if __name__ == '__main__':
    data = sys.stdin.read().split()
    if not data: sys.exit(0)
    it = iter(data)
    n = int(next(it))
    trie = Trie()
    for _ in range(n): trie.insert(next(it))
    q = next(it)
    print('YES' if trie.search(q) else 'NO')

# Time Complexity: O(L) per op
# Space Complexity: O(sum lengths)
