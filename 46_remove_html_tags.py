"""
Task 46: Remove HTML tags from a string.
Reads a line and prints the string with tags removed.
"""
import sys

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    out = []
    in_tag = False
    for ch in s:
        if ch == '<': in_tag = True
        elif ch == '>': in_tag = False
        elif not in_tag: out.append(ch)
    print(''.join(out))

# Time Complexity: O(n)
# Space Complexity: O(n)
