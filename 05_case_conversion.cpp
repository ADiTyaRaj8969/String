#include <bits/stdc++.h>
using namespace std;

/*
Task 5: Convert a string to uppercase/lowercase manually.
Reads a line and prints uppercase and lowercase versions (two lines).
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    string up = s, low = s;
    for (char& c : up)
        if (c >= 'a' && c <= 'z')
            c = c - 'a' + 'A';
    for (char& c : low)
        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';
    cout << up << '\n' << low << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
