"""
Task 31: Implement the Naive pattern searching algorithm.
Reads two lines: text and pattern; prints all starting indices (0-based) separated by spaces.
"""
import sys

if __name__ == '__main__':
    t = sys.stdin.readline().rstrip('\n')
    p = sys.stdin.readline().rstrip('\n')
    res = []
    n, m = len(t), len(p)
    for i in range(n-m+1):
        if t[i:i+m] == p: res.append(str(i))
    print(' '.join(res))

# Time Complexity: O(n*m)
# Space Complexity: O(1)
