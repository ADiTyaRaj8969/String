"""
Task 11: Replace all spaces in a string with %20.
Reads a line and prints the modified string.
"""
import sys

def replace_spaces(s: str) -> str:
    return ''.join('%20' if ch == ' ' else ch for ch in s)

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(replace_spaces(s))

# Time Complexity: O(n)
# Space Complexity: O(n)
