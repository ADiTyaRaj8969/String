"""
Task 10: Find the first non-repeating character in a string.
Reads a line and prints the character or "_" if none.
"""
import sys
from collections import Counter

def first_non_repeating(s: str) -> str:
    cnt = Counter(s)
    for ch in s:
        if cnt[ch] == 1:
            return ch
    return '_'

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(first_non_repeating(s))

# Time Complexity: O(n)
# Space Complexity: O(k)
