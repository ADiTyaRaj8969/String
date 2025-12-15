#include <bits/stdc++.h>
using namespace std;

/*
Task 17: Reverse each word in a sentence.
Reads a line and prints each word reversed, preserving word order.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    stringstream ss(s);
    string word;
    bool first = true;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (!first)
            cout << ' ';
        cout << word;
        first = false;
    }
    cout << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
