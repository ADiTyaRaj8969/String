"""
Task 47: Longest substring with at most K distinct characters.
Reads a line (string) and integer K on next line; prints length of longest substring.
"""
import sys
from collections import defaultdict

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    try:
        k = int(sys.stdin.readline().strip())
    except:
        k = 0
    cnt = defaultdict(int)
    l = 0; best = 0
    for r,ch in enumerate(s):
        cnt[ch] += 1
        while len(cnt) > k:
            cnt[s[l]] -= 1
            if cnt[s[l]] == 0: del cnt[s[l]]
            l += 1
        best = max(best, r-l+1)
    print(best)

# Time Complexity: O(n)
# Space Complexity: O(k)
