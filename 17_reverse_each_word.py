"""
Task 17: Reverse each word in a sentence.
Reads a line and prints each word reversed, preserving word order.
"""
import sys

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    words = s.split()
    print(' '.join(w[::-1] for w in words))

# Time Complexity: O(n)
# Space Complexity: O(n)
