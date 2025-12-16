"""
Task 33: Implement the Rabin–Karp string matching algorithm.
Reads two lines: text and pattern; prints starting indices separated by spaces.
"""
import sys

def rabin_karp(t: str, p: str):
    n, m = len(t), len(p)
    if m > n: return []
    base = 256
    mod = 2**61-1
    def mul(a,b): return (a*b) % mod
    hp = 0; ht = 0; power = 1
    for i in range(m):
        hp = (hp*base + ord(p[i])) % mod
        ht = (ht*base + ord(t[i])) % mod
        if i>0: power = (power*base) % mod
    res = []
    if hp == ht and t[:m] == p: res.append(0)
    for i in range(m, n):
        ht = (ht*base + ord(t[i]) - power*ord(t[i-m])) % mod
        if ht < 0: ht += mod
        if ht == hp and t[i-m+1:i+1] == p: res.append(i-m+1)
    return res

if __name__ == '__main__':
    t = sys.stdin.readline().rstrip('\n')
    p = sys.stdin.readline().rstrip('\n')
    print(' '.join(map(str, rabin_karp(t,p))))

# Time Complexity: O(n)
# Space Complexity: O(1)
