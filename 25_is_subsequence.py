"""
Task 25: Check if one string is a subsequence of another.
Reads two lines: s and t, prints YES if s is subsequence of t.
"""
import sys

def is_subsequence(s: str, t: str) -> bool:
    i = 0
    for ch in t:
        if i < len(s) and s[i] == ch:
            i += 1
    return i == len(s)

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    t = sys.stdin.readline().rstrip('\n')
    print('YES' if is_subsequence(s,t) else 'NO')

# Time Complexity: O(n)
# Space Complexity: O(1)
