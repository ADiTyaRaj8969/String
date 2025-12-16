"""
Task 23: Find the longest common prefix among an array of strings.
Reads lines until EOF and prints the longest common prefix.
"""
import sys

def longest_common_prefix(strs):
    if not strs: return ''
    prefix = strs[0]
    for s in strs[1:]:
        while not s.startswith(prefix):
            prefix = prefix[:-1]
            if not prefix: return ''
    return prefix

if __name__ == '__main__':
    lines = [line.rstrip('\n') for line in sys.stdin]
    print(longest_common_prefix(lines))

# Time Complexity: O(S)
# Space Complexity: O(1)
