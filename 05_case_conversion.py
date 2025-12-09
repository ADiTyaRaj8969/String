"""
Task 5: Convert a string to uppercase/lowercase manually.
Reads a line and prints uppercase and lowercase versions (two lines).
"""
import sys

def to_upper(s: str) -> str:
    res = []
    for ch in s:
        code = ord(ch)
        if 97 <= code <= 122:
            res.append(chr(code - 32))
        else:
            res.append(ch)
    return ''.join(res)

def to_lower(s: str) -> str:
    res = []
    for ch in s:
        code = ord(ch)
        if 65 <= code <= 90:
            res.append(chr(code + 32))
        else:
            res.append(ch)
    return ''.join(res)

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(to_upper(s))
    print(to_lower(s))

# Time Complexity: O(n)
# Space Complexity: O(n)
