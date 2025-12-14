"""
Task 9: Check if two strings are anagrams of each other.
Reads two lines and prints "YES" or "NO".
"""
import sys
from collections import Counter

if __name__ == '__main__':
    a = sys.stdin.readline().rstrip('\n')
    b = sys.stdin.readline().rstrip('\n')
    print('YES' if Counter(a) == Counter(b) else 'NO')

# Time Complexity: O(n)
# Space Complexity: O(k)
