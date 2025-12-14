"""
Task 8: Remove all vowels from a string.
Reads a line and prints it without vowels.
"""
import sys

def remove_vowels(s: str) -> str:
    vowels = set('aeiouAEIOU')
    return ''.join(ch for ch in s if ch not in vowels)

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(remove_vowels(s))

# Time Complexity: O(n)
# Space Complexity: O(n)
