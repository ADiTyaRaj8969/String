#include <bits/stdc++.h>
using namespace std;

/*
Task 23: Find the longest common prefix among an array of strings.
Reads lines until EOF and prints the longest common prefix.
*/

int main()
{
    vector<string> arr;
    string line;
    while (getline(cin, line))
        if (!line.empty() || cin)
            arr.push_back(line);
    if (arr.empty())
    {
        cout << "" << '\n';
        return 0;
    }
    string prefix = arr[0];
    for (size_t i = 1; i < arr.size(); ++i)
    {
        while (arr[i].find(prefix) != 0) prefix = prefix.substr(0, prefix.size() - 1);
        if (prefix.empty())
            break;
    }
    cout << prefix << '\n';
    return 0;
}

// Time Complexity: O(S) where S is sum of chars
// Space Complexity: O(1)
