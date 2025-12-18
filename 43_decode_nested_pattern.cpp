#include <bits/stdc++.h>
using namespace std;

/*
Task 43: Decode a string with nested pattern like "3[a2[b]]" -> abbabbabb
Reads a line and prints decoded string.
*/

int main()
{
    string s;
    if (!getline(cin, s))
        return 0;
    stack<int> nums;
    stack<string> strs;
    string cur = "";
    int num = 0;
    for (char c : s)
    {
        if (isdigit(c))
            num = num * 10 + (c - '0');
        else if (c == '[')
        {
            nums.push(num);
            strs.push(cur);
            num = 0;
            cur = "";
        }
        else if (c == ']')
        {
            int k = nums.top();
            nums.pop();
            string prev = strs.top();
            strs.pop();
            string tmp = "";
            for (int i = 0; i < k; ++i) tmp += cur;
            cur = prev + tmp;
        }
        else
            cur.push_back(c);
    }
    cout << cur << "\n";
}

// Time Complexity: O(n * repeat_factor)
// Space Complexity: O(n)
