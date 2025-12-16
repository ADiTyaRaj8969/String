"""
Task 28: Count all palindromic substrings in a string.
Uses expand-around-center O(n^2).
"""
import sys

def count_pal_subs(s: str) -> int:
    n = len(s); ans = 0
    for i in range(n):
        l=r=i
        while l>=0 and r<n and s[l]==s[r]: ans+=1; l-=1; r+=1
        l,i2 = i, i+1
        r = i2
        while l>=0 and r<n and s[l]==s[r]: ans+=1; l-=1; r+=1
    return ans

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(count_pal_subs(s))

# Time Complexity: O(n^2)
# Space Complexity: O(1)
