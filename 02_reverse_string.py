"""
Task 2: Reverse a string.
Reads a line and prints its reverse.
"""
import sys

def reverse_string(s: str) -> str:
    return ''.join(s[i] for i in range(len(s)-1, -1, -1))

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(reverse_string(s))

# Time Complexity: O(n)
# Space Complexity: O(n)  # for the reversed string
