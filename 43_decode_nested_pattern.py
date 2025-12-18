"""
Task 43: Decode a string with nested pattern like "3[a2[b]]" -> abbabbabb
Reads a line and prints decoded string.
"""
import sys

def decode(s: str) -> str:
    nums = []
    strs = []
    cur = ''
    num = 0
    for ch in s:
        if ch.isdigit(): num = num*10 + int(ch)
        elif ch == '[':
            nums.append(num); strs.append(cur); num=0; cur=''
        elif ch == ']':
            k = nums.pop(); prev = strs.pop(); cur = prev + cur*k
        else:
            cur += ch
    return cur

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    print(decode(s))

# Time Complexity: O(n * repeat_factor)
# Space Complexity: O(n)
