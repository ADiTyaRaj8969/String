"""
Task 13: Find all permutations of a string.
Prints permutations in lexicographic order (one per line).
Warning: output grows factorially.
"""
import sys
from itertools import permutations

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    perms = sorted(set(''.join(p) for p in permutations(s)))
    for p in perms:
        print(p)

# Time Complexity: O(n! * n)
# Space Complexity: O(n! * n)
