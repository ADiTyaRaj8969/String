#include <bits/stdc++.h>
using namespace std;

/*
Task 40: Check if a pattern exists in a string with case-insensitivity.
Reads two lines: text and pattern; prints YES/NO.
*/

int main()
{
    string t, p;
    if (!getline(cin, t))
        return 0;
    if (!getline(cin, p))
        return 0;
    string T = t, P = p;
    for (char& c : T) c = tolower(c);
    for (char& c : P) c = tolower(c);
    if (T.find(P) != string::npos)
        cout << "YES\n";
    else
        cout << "NO\n";
}

// Time Complexity: O(n*m) worst-case for find, O(n) average
// Space Complexity: O(n)
