#include <bits/stdc++.h>
using namespace std;

/*
Task 13: Find all permutations of a string.
Prints permutations in lexicographic order (one per line).
Warning: output grows factorially.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    sort(s.begin(), s.end());
    do
    {
        cout << s << '\n';
    } while (next_permutation(s.begin(), s.end()));
    return 0;
}

// Time Complexity: O(n! * n) to generate all permutations
// Space Complexity: O(n)
