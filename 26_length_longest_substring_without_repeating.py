"""
Task 26: Find length of the longest substring without repeating characters.
Uses sliding window.
"""
import sys

def length_of_longest(s: str) -> int:
    last = {}
    start = 0; best = 0
    for i,ch in enumerate(s):
        if ch in last and last[ch] >= start:
            start = last[ch] + 1
        last[ch] = i
        best = max(best, i-start+1)
    return best

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(length_of_longest(s))

# Time Complexity: O(n)
# Space Complexity: O(k)
