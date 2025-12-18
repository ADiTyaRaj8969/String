"""
Task 41: Count and say sequence. Given n, generate nth sequence (1-indexed).
Reads an integer n and prints the nth string.
"""
import sys

def count_and_say(n: int) -> str:
    s = '1'
    for _ in range(1, n):
        t = []
        cnt = 1
        for i in range(1, len(s)+1):
            if i < len(s) and s[i] == s[i-1]:
                cnt += 1
            else:
                t.append(str(cnt))
                t.append(s[i-1])
                cnt = 1
        s = ''.join(t)
    return s

if __name__ == '__main__':
    n = int(sys.stdin.readline().strip() or 0)
    print(count_and_say(n))

# Time Complexity: grows with output length
# Space Complexity: O(output length)
