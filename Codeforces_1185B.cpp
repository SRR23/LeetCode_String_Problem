
// For example, as a result of typing the word "hello", the following words
// could be printed: "hello", "hhhhello", "hheeeellllooo", but the
// following could not be printed: "hell", "helo", "hhllllooo".
// You are given a list of pairs of words. For each pair, determine if the
// second word could be printed by typing the first one on Polycarp's
// keyboard.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        vector<pair<char, int>> va, vb;
        int cnt1 = 1;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == a[i + 1])
            {
                cnt1++;
            }
            else
            {
                va.push_back({a[i], cnt1});
                cnt1 = 1;
            }
        }
        int cnt2 = 1;
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == b[i + 1])
            {
                cnt2++;
            }
            else
            {
                vb.push_back({b[i], cnt2});
                cnt2 = 1;
            }
        }
        if (va.size() != vb.size())
        {
            cout << "NO\n";
        }
        else
        {
            bool ok = true;
            for (int i = 0; i < va.size(); i++)
            {
                if (va[i].first == vb[i].first && va[i].second <= vb[i].second)
                {
                    continue;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            if (ok == true)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}