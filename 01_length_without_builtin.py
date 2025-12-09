"""
Task 1: Find the length of a string without using built-in functions.
Reads a line from stdin and outputs its length.
"""
import sys

def length_without_builtin(s: str) -> int:
    count = 0
    for _ in s:
        count += 1
    return count

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(length_without_builtin(s))

# Time Complexity: O(n)
# Space Complexity: O(1)
