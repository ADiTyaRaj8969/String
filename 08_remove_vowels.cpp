#include <bits/stdc++.h>
using namespace std;

/*
Task 8: Remove all vowels from a string.
Reads a line and prints it without vowels.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    string vowels = "aeiouAEIOU";
    for (char c : s)
        if (vowels.find(c) == string::npos)
            cout << c;
    cout << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
