#include <bits/stdc++.h>
using namespace std;

/*
Task 4: Count vowels and consonants in a string.
Reads a line and prints counts as: vowels consonants
Non-alphabetic characters are ignored.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    int vowels = 0, consonants = 0;
    string v = "aeiouAEIOU";
    for (char c : s)
    {
        if (isalpha((unsigned char)c))
        {
            if (v.find(c) != string::npos)
                ++vowels;
            else
                ++consonants;
        }
    }
    cout << vowels << " " << consonants << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
