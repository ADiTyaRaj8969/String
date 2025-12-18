"""
Task 39: Find all occurrences of a pattern in a string.
Reads two lines: text and pattern; prints all starting indices separated by spaces.
Uses KMP.
"""
import sys

def prefix_function(s: str):
    n = len(s); pi = [0]*n
    for i in range(1,n):
        j = pi[i-1]
        while j>0 and s[i]!=s[j]: j = pi[j-1]
        if s[i]==s[j]: j+=1
        pi[i]=j
    return pi

if __name__ == '__main__':
    t = sys.stdin.readline().rstrip('\n')
    p = sys.stdin.readline().rstrip('\n')
    s = p + '#' + t
    pi = prefix_function(s)
    m = len(p)
    res = [str(i-2*m) for i,v in enumerate(pi) if i>=m+1 and v==m]
    print(' '.join(res))

# Time Complexity: O(n+m)
# Space Complexity: O(n+m)
