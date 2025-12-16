"""
Task 27: Find the smallest window in a string containing all characters of another string.
Reads two lines: text and pattern; prints the smallest window or empty line if none.
"""
import sys
from collections import Counter

def min_window(s: str, t: str) -> str:
    if not t: return ''
    need = Counter(t)
    required = len(t)
    l = 0; best = (0, float('inf'))
    for r,ch in enumerate(s):
        if need[ch] > 0: required -= 1
        need[ch] -= 1
        while required == 0:
            if r - l + 1 < best[1]: best = (l, r - l + 1)
            need[s[l]] += 1
            if need[s[l]] > 0: required += 1
            l += 1
    return '' if best[1] == float('inf') else s[best[0]:best[0]+best[1]]

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    t = sys.stdin.readline().rstrip('\n')
    print(min_window(s,t))

# Time Complexity: O(n)
# Space Complexity: O(k)
