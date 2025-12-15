#include <bits/stdc++.h>
using namespace std;

/*
Task 18: Remove a given substring from a string.
Reads two lines: main string and substring to remove. Prints result.
*/

int main()
{
    string s, sub;
    if (!getline(cin, s))
        return 0;
    if (!getline(cin, sub))
        return 0;
    size_t pos = 0;
    while ((pos = s.find(sub, pos)) != string::npos)
    {
        s.erase(pos, sub.length());
    }
    cout << s << '\n';
    return 0;
}

// Time Complexity: O(n*m) worst-case depending on find
// Space Complexity: O(1)
