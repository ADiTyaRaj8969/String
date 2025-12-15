#include <bits/stdc++.h>
using namespace std;

/*
Task 14: Check if a rotation of one string is another string.
Reads two lines; prints YES if second is rotation of first.
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
    string t = a + a;
    if (t.find(b) != string::npos)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

// Time Complexity: O(n^2) for naive find, but average O(n) with efficient search
// Space Complexity: O(n)
