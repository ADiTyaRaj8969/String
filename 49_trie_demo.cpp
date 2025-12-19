#include <bits/stdc++.h>
using namespace std;

/*
Task 49: Trie insert/search demonstration.
Reads N, then N words to insert, then a query word and prints YES/NO if present.
*/

struct TrieNode
{
    array<int, 26> next;
    bool end = false;
    TrieNode() { next.fill(-1); }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    if (!(cin >> N))
        return 0;
    string w;
    vector<TrieNode> trie(1);
    for (int i = 0; i < N; ++i)
    {
        cin >> w;
        int v = 0;
        for (char c : w)
        {
            int idx = tolower(c) - 'a';
            if (trie[v].next[idx] == -1)
            {
                trie[v].next[idx] = trie.size();
                trie.emplace_back();
            }
            v = trie[v].next[idx];
        }
        trie[v].end = true;
    }
    string q;
    cin >> q;
    int v = 0;
    bool ok = true;
    for (char c : q)
    {
        int idx = tolower(c) - 'a';
        if (trie[v].next[idx] == -1)
        {
            ok = false;
            break;
        }
        v = trie[v].next[idx];
    }
    cout << (ok && trie[v].end ? "YES" : "NO") << "\n";
}

// Time Complexity: insert/search O(length)
// Space Complexity: O(sum of lengths * alphabet)
