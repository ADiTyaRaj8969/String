"""
Task 24: Find the longest common subsequence between two strings.
Reads two lines and prints length of LCS using DP.
"""
import sys

def lcs_len(a: str, b: str) -> int:
    n, m = len(a), len(b)
    dp = [[0]*(m+1) for _ in range(n+1)]
    for i in range(1,n+1):
        for j in range(1,m+1):
            dp[i][j] = dp[i-1][j-1]+1 if a[i-1]==b[j-1] else max(dp[i-1][j], dp[i][j-1])
    return dp[n][m]

if __name__ == '__main__':
    a = sys.stdin.readline().rstrip('\n')
    b = sys.stdin.readline().rstrip('\n')
    print(lcs_len(a,b))

# Time Complexity: O(n*m)
# Space Complexity: O(n*m)
