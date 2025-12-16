"""
Task 34: Implement the Z algorithm for pattern searching.
Reads two lines: text and pattern; prints starting indices separated by spaces.
"""
import sys

def z_function(s: str):
    n = len(s); z = [0]*n
    l = r = 0
    for i in range(1,n):
        if i <= r: z[i] = min(r-i+1, z[i-l])
        while i+z[i] < n and s[z[i]] == s[i+z[i]]: z[i] += 1
        if i + z[i] - 1 > r: l, r = i, i+z[i]-1
    return z

if __name__ == '__main__':
    t = sys.stdin.readline().rstrip('\n')
    p = sys.stdin.readline().rstrip('\n')
    s = p + '$' + t
    z = z_function(s)
    m = len(p)
    res = [str(i-2*m) for i,val in enumerate(z) if i>=m+1 and val==m]
    print(' '.join(res))

# Time Complexity: O(n+m)
# Space Complexity: O(n+m)
