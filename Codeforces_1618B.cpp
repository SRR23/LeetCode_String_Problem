
// Missing Bigram

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
        string s;
        cin >> s;
        cout << s;
        char last = s[1];
        int flag = 0;
        for (int i = 1; i < n - 2; i++)
        {
            string a;
            cin >> a;
            if (last == a[0])
            {
                cout << a[1];
                last = a[1];
            }
            else if (last != a[0])
            {
                cout << a;
                last = a[1];
                flag = 1;
            }
        }
        if (flag != 1)
        {
            if (last == 'a')
                cout << 'b';
            else
                cout << 'a';
        }
        cout << endl;
    }
}
