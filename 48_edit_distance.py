"""
Task 48: Edit distance (Levenshtein).
Reads two lines and prints the edit distance (min operations).
"""
import sys

def edit_distance(a: str, b: str) -> int:
    n, m = len(a), len(b)
    dp = [[0]*(m+1) for _ in range(n+1)]
    for i in range(n+1): dp[i][0] = i
    for j in range(m+1): dp[0][j] = j
    for i in range(1,n+1):
        for j in range(1,m+1):
            if a[i-1] == b[j-1]: dp[i][j] = dp[i-1][j-1]
            else: dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1])
    return dp[n][m]

if __name__ == '__main__':
    a = sys.stdin.readline().rstrip('\n')
    b = sys.stdin.readline().rstrip('\n')
    print(edit_distance(a,b))

# Time Complexity: O(n*m)
# Space Complexity: O(n*m)
