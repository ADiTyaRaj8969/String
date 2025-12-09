"""
Task 3: Check if a string is a palindrome.
Reads a line and prints "YES" if palindrome, otherwise "NO".
"""
import sys

def is_palindrome(s: str) -> bool:
    i, j = 0, len(s)-1
    while i < j:
        if s[i] != s[j]:
            return False
        i += 1; j -= 1
    return True

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print('YES' if is_palindrome(s) else 'NO')

# Time Complexity: O(n)
# Space Complexity: O(1)
