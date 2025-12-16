"""
Task 29: Find the longest repeating substring.
Simple O(n^2) approach: check lengths descending. Not optimal but safe.
"""
import sys

def longest_repeating(s: str) -> str:
    n = len(s)
    for L in range(n//2,0,-1):
        seen = set()
        for i in range(0,n-L+1):
            sub = s[i:i+L]
            if sub in seen:
                return sub
            seen.add(sub)
    return ''

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(longest_repeating(s))

# Time Complexity: O(n^2 * L) worst-case; simple but not optimal
# Space Complexity: O(n)
