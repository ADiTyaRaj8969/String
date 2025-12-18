"""
Task 40: Check if a pattern exists in a string with case-insensitivity.
Reads two lines: text and pattern; prints YES/NO.
"""
import sys

if __name__ == '__main__':
    t = sys.stdin.readline().rstrip('\n')
    p = sys.stdin.readline().rstrip('\n')
    print('YES' if p.lower() in t.lower() else 'NO')

# Time Complexity: O(n*m) worst-case
# Space Complexity: O(n)
