"""
Task 12: Remove duplicate characters from a string (keep first occurrences).
Reads a line and prints string with duplicates removed.
"""
import sys

def remove_duplicates(s: str) -> str:
    seen = set()
    out = []
    for ch in s:
        if ch not in seen:
            seen.add(ch)
            out.append(ch)
    return ''.join(out)

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(remove_duplicates(s))

# Time Complexity: O(n)
# Space Complexity: O(k)
