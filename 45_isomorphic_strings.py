"""
Task 45: Check if two strings are isomorphic.
Reads two lines and prints YES/NO.
"""
import sys

def is_isomorphic(s: str, t: str) -> bool:
    if len(s) != len(t): return False
    m1 = {}
    m2 = {}
    for i,ch in enumerate(s):
        if ch in m1 and m1[ch] != t[i]: return False
        if t[i] in m2 and m2[t[i]] != ch: return False
        m1[ch] = t[i]
        m2[t[i]] = ch
    return True

if __name__ == '__main__':
    a = sys.stdin.readline().rstrip('\n')
    b = sys.stdin.readline().rstrip('\n')
    print('YES' if is_isomorphic(a,b) else 'NO')

# Time Complexity: O(n)
# Space Complexity: O(k)
