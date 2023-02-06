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
        vector<string> v(n);
        map<string, int> mp;
        map<char, int> p, q;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            int x = p[v[i][0]];
            int y = q[v[i][1]];
            int z = mp[v[i]];
            ans += (x - z) + (y - z);
            mp[v[i]]++;
            p[v[i][0]]++;
            q[v[i][1]]++;
        }
        cout << ans << '\n';
    }
}