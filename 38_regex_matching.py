"""
Task 38: Implement regex matching for . and *.
Reads two lines: text and pattern; prints YES/NO.
"""
import sys

def is_match(s: str, p: str) -> bool:
    n, m = len(s), len(p)
    dp = [[False]*(m+1) for _ in range(n+1)]
    dp[0][0] = True
    for j in range(2, m+1):
        if p[j-1] == '*': dp[0][j] = dp[0][j-2]
    for i in range(1, n+1):
        for j in range(1, m+1):
            if p[j-1] == '*':
                dp[i][j] = dp[i][j-2] or ((p[j-2]=='.' or p[j-2]==s[i-1]) and dp[i-1][j])
            else:
                dp[i][j] = (p[j-1]=='.' or p[j-1]==s[i-1]) and dp[i-1][j-1]
    return dp[n][m]

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    p = sys.stdin.readline().rstrip('\n')
    print('YES' if is_match(s,p) else 'NO')

# Time Complexity: O(n*m)
# Space Complexity: O(n*m)
