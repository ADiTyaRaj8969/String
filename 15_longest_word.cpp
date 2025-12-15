#include <bits/stdc++.h>
using namespace std;

/*
Task 15: Find the longest word in a sentence.
Reads a line and prints the longest word (first if tie).
Words split by spaces.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    stringstream ss(s);
    string word, best = "";
    while (ss >> word)
    {
        if (word.size() > best.size())
            best = word;
    }
    cout << best << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
