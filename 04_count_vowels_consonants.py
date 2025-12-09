"""
Task 4: Count vowels and consonants in a string.
Reads a line and prints counts as: vowels consonants
Non-alphabetic characters are ignored.
"""
import sys

def count_vowels_consonants(s: str):
    vowels = set('aeiouAEIOU')
    v = c = 0
    for ch in s:
        if ch.isalpha():
            if ch in vowels: v += 1
            else: c += 1
    return v, c

if __name__ == '__main__':
    s = sys.stdin.readline().rstrip('\n')
    v, c = count_vowels_consonants(s)
    print(v, c)

# Time Complexity: O(n)
# Space Complexity: O(1)
