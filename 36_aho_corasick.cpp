#include <bits/stdc++.h>
using namespace std;

/*
Task 36: Search multiple patterns using Aho–Corasick algorithm.
Reads N (number of patterns), N pattern lines, then a text line.
Prints for each pattern whether it occurs (YES/NO).
*/

struct Node
{
    array<int, 26> next;
    int link;
    vector<int> out;
    Node()
    {
        next.fill(-1);
        link = -1;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    if (!(cin >> N))
        return 0;
    string tmp;
    getline(cin, tmp);
    vector<string> pats(N);
    for (int i = 0; i < N; ++i) getline(cin, pats[i]);
    string text;
    getline(cin, text);
    vector<Node> trie(1);
    for (int i = 0; i < N; ++i)
    {
        int v = 0;
        for (char ch : pats[i])
        {
            if (!isalpha(ch))
                continue;
            int c = tolower(ch) - 'a';
            if (trie[v].next[c] == -1)
            {
                trie[v].next[c] = trie.size();
                trie.emplace_back();
            }
            v = trie[v].next[c];
        }
        trie[v].out.push_back(i);
    }
    // build links
    queue<int> q;
    trie[0].link = 0;
    for (int c = 0; c < 26; ++c)
    {
        int u = trie[0].next[c];
        if (u != -1)
        {
            trie[u].link = 0;
            q.push(u);
        }
        else
            trie[0].next[c] = 0;
    }
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int c = 0; c < 26; ++c)
        {
            int u = trie[v].next[c];
            if (u != -1)
            {
                trie[u].link = trie[trie[v].link].next[c];
                trie[u].out.insert(trie[u].out.end(), trie[trie[u].link].out.begin(),
                                   trie[trie[u].link].out.end());
                q.push(u);
            }
            else
                trie[v].next[c] = trie[trie[v].link].next[c];
        }
    }
    vector<bool> found(N, false);
    int v = 0;
    for (char ch : text)
    {
        if (!isalpha(ch))
        {
            v = 0;
            continue;
        }
        int c = tolower(ch) - 'a';
        v = trie[v].next[c];
        for (int idx : trie[v].out) found[idx] = true;
    }
    for (int i = 0; i < N; ++i) cout << (found[i] ? "YES" : "NO") << "\n";
}

// Time Complexity: O(sum lengths + text length + total matches)
// Space Complexity: O(sum lengths)
