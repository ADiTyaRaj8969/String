#include <bits/stdc++.h>
using namespace std;

/*
Task 9: Check if two strings are anagrams of each other.
Reads two lines and prints "YES" or "NO".
*/

int main()
{
    string a, b;
    if (!getline(cin, a))
        return 0;
    if (!getline(cin, b))
        return 0;
    if (a.size() != b.size())
    {
        cout << "NO\n";
        return 0;
    }
    array<int, 256> cnt{};
    for (char c : a) ++cnt[(unsigned char)c];
    for (char c : b) --cnt[(unsigned char)c];
    for (int x : cnt)
        if (x != 0)
        {
            cout << "NO\n";
            return 0;
        }
    cout << "YES\n";
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
