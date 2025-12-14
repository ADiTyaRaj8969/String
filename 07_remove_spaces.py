"""
Task 7: Remove all spaces from a string.
Reads a line and prints it without spaces.
"""
import sys

def remove_spaces(s: str) -> str:
    return ''.join(ch for ch in s if ch != ' ')

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(remove_spaces(s))

# Time Complexity: O(n)
# Space Complexity: O(n)
