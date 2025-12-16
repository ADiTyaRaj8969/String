"""
Task 22: Find the longest palindromic substring.
Simple expand-around-center O(n^2) algorithm.
"""
import sys

def longest_palindrome(s: str) -> str:
    n = len(s)
    if n == 0: return ''
    best_l = 0; best_r = 0
    for i in range(n):
        # odd
        l = r = i
        while l>=0 and r<n and s[l]==s[r]:
            if r-l > best_r-best_l:
                best_l, best_r = l, r
            l -= 1; r += 1
        # even
        l, r = i, i+1
        while l>=0 and r<n and s[l]==s[r]:
            if r-l > best_r-best_l:
                best_l, best_r = l, r
            l -= 1; r += 1
    return s[best_l:best_r+1]

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(longest_palindrome(s))

# Time Complexity: O(n^2)
# Space Complexity: O(1)
