"""
Task 21: Generate all substrings of a string.
Prints each substring on its own line.
"""
import sys

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    n = len(s)
    for i in range(n):
        for j in range(i+1, n+1):
            print(s[i:j])

# Time Complexity: O(n^2)
# Space Complexity: O(1) extra
