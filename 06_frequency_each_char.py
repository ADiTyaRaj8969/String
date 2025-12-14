"""
Task 6: Find the frequency of each character in a string.
Prints each character and its count in order of first occurrence.
"""
import sys
from collections import OrderedDict

def freq_each_char(s: str):
    d = OrderedDict()
    for ch in s:
        d[ch] = d.get(ch, 0) + 1
    return d

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    d = freq_each_char(s)
    for ch, cnt in d.items():
        print(f"{ch}: {cnt}")

# Time Complexity: O(n)
# Space Complexity: O(k)
