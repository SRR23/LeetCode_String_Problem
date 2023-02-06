
// A row of n cells is given, all initially white. Using a stamp, you can
// stamp any two neighboring cells such that one becomes red and the other
// becomes blue. A stamp can be rotated, i.e. it can be used in both ways:
// as BR and as RB. During use, the stamp must completely fit on the given n cells
// The stamp can be applied multiple times to the same cell. Each usage of
// the stamp recolors both cells that are under the stamp.
// Given a final picture, is it possible to make it using the stamp zero or more times?

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
        string s;
        cin >> n >> s;
        bool ok = true;
        int b = 0, r = 0;
        if (n == 1 && s != "W")
            ok = false;
        else if (n == 2 && s[0] == 'W' && s[1] == 'W')
            ok = true;
        else if (n == 2 && (s[0] == 'W' || s[1] == 'W'))
            ok = false;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'B')
                    b++;
                else if (s[i] == 'R')
                    r++;
                else if (s[i] == 'W')
                {
                    if (r == 0 && b > 0 || r > 0 && b == 0)
                    {
                        ok = false;
                        break;
                    }
                    b = 0, r = 0;
                }
            }
        }
        if (r == 0 && b > 0 || r > 0 && b == 0)
        {
            ok = false;
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}