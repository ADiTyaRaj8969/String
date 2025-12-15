"""
Task 19: Find the most frequent character in a string.
Reads a line and prints the character (first by max count then by first occurrence).
"""
import sys
from collections import Counter

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    if not s:
        print('')
    else:
        cnt = Counter(s)
        maxc = max(cnt.values())
        for ch in s:
            if cnt[ch] == maxc:
                print(ch); break

# Time Complexity: O(n)
# Space Complexity: O(k)
