"""
Task 44: Find the longest substring containing only digits.
Reads a line and prints the substring.
"""
import sys

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    best = ''
    cur = ''
    for ch in s:
        if ch.isdigit(): cur += ch
        else:
            if len(cur) > len(best): best = cur
            cur = ''
    if len(cur) > len(best): best = cur
    print(best)

# Time Complexity: O(n)
# Space Complexity: O(n)
