#include <bits/stdc++.h>
using namespace std;

/*
Task 45: Check if two strings are isomorphic.
Reads two lines and prints YES/NO.
*/

bool isIsomorphic(const string& s, const string& t)
{
    if (s.size() != t.size())
        return false;
    vector<int> ms(256, -1), mt(256, -1);
    for (int i = 0; i < s.size(); ++i)
    {
        unsigned char a = s[i], b = t[i];
        if (ms[a] != mt[b])
            return false;
        ms[a] = mt[b] = i + 1;
    }
    return true;
}

int main()
{
    string a, b;
    if (!getline(cin, a))
        return 0;
    if (!getline(cin, b))
        return 0;
    cout << (isIsomorphic(a, b) ? "YES" : "NO") << "\n";
}

// Time Complexity: O(n)
// Space Complexity: O(1)
