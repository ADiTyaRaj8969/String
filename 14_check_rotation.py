"""
Task 14: Check if a rotation of one string is another string.
Reads two lines; prints YES if second is rotation of first.
"""
import sys

if __name__ == '__main__':
    a = sys.stdin.readline().rstrip('\n')
    b = sys.stdin.readline().rstrip('\n')
    if len(a) != len(b):
        print('NO')
    else:
        print('YES' if b in (a+a) else 'NO')

# Time Complexity: O(n^2) worst-case for naive substring search, O(n) with KMP
# Space Complexity: O(n)
