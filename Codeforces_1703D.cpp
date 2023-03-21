
// You are given n strings s1,s2,…,sn of length at most 8.

// For each string si, determine if there exist two strings sj and sk such that si=sj+sk.
// That is, si is the concatenation of sj and sk. Note that j can be equal to k.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
        int n;
        cin >> n;
        string s[n];
        map<string, bool> mp;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]] = true;
        }
        for (int i = 0; i < n; i++)
        {
            bool ok = false;
            for (int j = 1; j < s[i].size(); j++)
            {
                string a = s[i].substr(0, j);
                string b = s[i].substr(j, s[i].size() - j);
                if (mp[a] && mp[b])
                {
                    ok = true;
                }
            }
            v.push_back(ok);
        }
        for (auto it : v)
        {
            cout << it;
        }
        cout << '\n';
    }
    return 0;
}
