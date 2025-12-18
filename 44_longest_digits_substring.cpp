#include <bits/stdc++.h>
using namespace std;

/*
Task 44: Find the longest substring containing only digits.
Reads a line and prints the substring.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    int bestL = 0, bestLen = 0;
    int curL = 0, curLen = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
        {
            if (curLen == 0)
                curL = i;
            ++curLen;
            if (curLen > bestLen)
            {
                bestLen = curLen;
                bestL = curL;
            }
        }
        else
            curLen = 0;
    }
    cout << s.substr(bestL, bestLen) << "\n";
}

// Time Complexity: O(n)
// Space Complexity: O(1)
