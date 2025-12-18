"""
Task 42: Run-length encoding of a string.
Reads a line and prints its run-length encoding (e.g., aab -> a2b1).
"""
import sys

def rle(s: str) -> str:
    if not s: return ''
    out = []
    cnt = 1
    for i in range(1, len(s)+1):
        if i < len(s) and s[i] == s[i-1]:
            cnt += 1
        else:
            out.append(s[i-1])
            out.append(str(cnt))
            cnt = 1
    return ''.join(out)

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(rle(s))

# Time Complexity: O(n)
# Space Complexity: O(n)
