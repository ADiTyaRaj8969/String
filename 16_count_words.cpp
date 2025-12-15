#include <bits/stdc++.h>
using namespace std;

/*
Task 16: Count words in a string.
Reads a line and prints the number of words.
Words delimited by whitespace.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    stringstream ss(s);
    string w;
    int cnt = 0;
    while (ss >> w) ++cnt;
    cout << cnt << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
