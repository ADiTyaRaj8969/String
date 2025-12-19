#include <bits/stdc++.h>
using namespace std;

/*
Task 46: Remove HTML tags from a string.
Reads a line and prints the string with tags removed.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    string out;
    bool in_tag = false;
    for (char c : s)
    {
        if (c == '<')
            in_tag = true;
        else if (c == '>')
        {
            in_tag = false;
            continue;
        }
        else if (!in_tag)
            out.push_back(c);
    }
    cout << out << "\n";
}

// Time Complexity: O(n)
// Space Complexity: O(n)
