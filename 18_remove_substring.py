"""
Task 18: Remove a given substring from a string.
Reads two lines: main string and substring to remove. Prints result.
"""
import sys

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    sub = sys.stdin.readline().rstrip('\n')
    print(s.replace(sub, ''))

# Time Complexity: O(n)
# Space Complexity: O(n)
