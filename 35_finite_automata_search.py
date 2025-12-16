"""
Task 35: Finite Automata based pattern searching (simple placeholder).
Reads two lines: text and pattern; prints starting indices separated by spaces.
Note: this is a straightforward implementation for demonstration.
"""
import sys

def build_transition(p: str):
    m = len(p); K = 256
    trans = [[0]*K for _ in range(m+1)]
    for state in range(m+1):
        for x in range(K):
            s = p[:state] + chr(x)
            ns = min(m, len(s))
            while ns>0 and s[-ns:] != p[:ns]: ns -= 1
            trans[state][x] = ns
    return trans

if __name__ == '__main__':
    t = sys.stdin.readline().rstrip('\n')
    p = sys.stdin.readline().rstrip('\n')
    if not p: print('')
    else:
        trans = build_transition(p)
        state = 0; res = []
        for i,ch in enumerate(t):
            state = trans[state][ord(ch)]
            if state == len(p): res.append(str(i-len(p)+1))
        print(' '.join(res))

# Time Complexity: O(n*K) preprocess; O(n) search
# Space Complexity: O(m*K)
