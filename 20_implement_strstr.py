"""
Task 20: Implement your own version of strstr() (substring search).
Reads two lines: text and pattern, prints index of first occurrence or -1.
"""
import sys

def strstr_impl(text: str, pat: str) -> int:
    if pat == '': return 0
    n, m = len(text), len(pat)
    for i in range(n - m + 1):
        if text[i:i+m] == pat:
            return i
    return -1

if __name__ == '__main__':
    t = sys.stdin.readline().rstrip('\n')
    p = sys.stdin.readline().rstrip('\n')
    print(strstr_impl(t,p))

# Time Complexity: O(n*m) naive; O(n+m) with KMP
# Space Complexity: O(1)
