"""
Task 15: Find the longest word in a sentence.
Reads a line and prints the longest word (first if tie).
Words split by spaces.
"""
import sys

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    words = s.split()
    if not words:
        print('')
    else:
        print(max(words, key=len))

# Time Complexity: O(n)
# Space Complexity: O(n)
