"""
Task 16: Count words in a string.
Reads a line and prints the number of words.
Words delimited by whitespace.
"""
import sys

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(len(s.split()))

# Time Complexity: O(n)
# Space Complexity: O(n)
