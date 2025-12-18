#include <bits/stdc++.h>
using namespace std;

/*
Task 41: Count and say sequence. Given n, generate nth sequence (1-indexed).
Reads an integer n and prints the nth string.
*/

string countAndSay(int n)
{
    string s = "1";
    for (int i = 1; i < n; ++i)
    {
        string t = "";
        int cnt = 1;
        for (int j = 1; j <= s.size(); ++j)
        {
            if (j < s.size() && s[j] == s[j - 1])
                ++cnt;
            else
            {
                t += char('0' + cnt);
                t.push_back(s[j - 1]);
                cnt = 1;
            }
        }
        s = t;
    }
    return s;
}

int main()
{
    int n;
    if (!(cin >> n))
        return 0;
    cout << countAndSay(n) << "\n";
}

// Time Complexity: exponential in n (sequence grows), approx O(2^n)
// Space Complexity: proportional to sequence length
