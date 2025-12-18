#include <bits/stdc++.h>
using namespace std;

/*
Task 42: Run-length encoding of a string.
Reads a line and prints its run-length encoding (e.g., aab -> a2b1).
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    if (s.empty())
    {
        cout << "\n";
        return 0;
    }
    string out = "";
    int cnt = 1;
    for (size_t i = 1; i <= s.size(); ++i)
    {
        if (i < s.size() && s[i] == s[i - 1])
            ++cnt;
        else
        {
            out.push_back(s[i - 1]);
            out += to_string(cnt);
            cnt = 1;
        }
    }
    cout << out << "\n";
}

// Time Complexity: O(n)
// Space Complexity: O(n)
