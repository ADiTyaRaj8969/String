"""
Task 50: Palindrome partitioning (minimum cuts).
Reads a line and prints minimum cuts needed to partition string into palindromes.
"""
import sys

def min_cut(s: str) -> int:
    n = len(s)
    is_pal = [[False]*n for _ in range(n)]
    for i in range(n-1, -1, -1):
        for j in range(i, n):
            if s[i]==s[j] and (j-i<2 or is_pal[i+1][j-1]): is_pal[i][j]=True
    dp = [float('inf')] * (n+1)
    dp[0] = -1
    for i in range(1, n+1):
        for j in range(i):
            if is_pal[j][i-1]: dp[i] = min(dp[i], dp[j] + 1)
    return dp[n]

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(min_cut(s))

# Time Complexity: O(n^2)
# Space Complexity: O(n^2)
