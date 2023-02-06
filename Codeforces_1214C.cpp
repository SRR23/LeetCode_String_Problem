
// move at most one bracket from its original place in the sequence to any
// other position
// whether he can move one bracket so that the sequence becomes correct.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int open = 0, ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            open++;
        }
        else if (open)
        {
            open--;
        }
        else
        {
            ans++;
        }
    }
    int x = 0, y = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if (ans > 1 || x != y)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}