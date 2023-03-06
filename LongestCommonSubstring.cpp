
// Codeforces 1796B

#include <bits/stdc++.h>
using namespace std;

// int LCSubStr(string str1, string str2, int N, int M)
// {
//     int LCSuff[N + 1][M + 1];
//     int mx = 0;
//     for (int i = 0; i <= N; i++)
//     {
//         for (int j = 0; j <= M; j++)
//         {
//             if (i == 0 || j == 0)
//             {
//                 LCSuff[i][j] = 0;
//             }

//             else if (str1[i - 1] == str2[j - 1])
//             {
//                 LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
//                 mx = max(mx, LCSuff[i][j]);
//             }
//             else
//                 LCSuff[i][j] = 0;
//         }
//     }
//     return mx;
// }

string LCSubStr(string X, string Y)
{
    int m = X.length();
    int n = Y.length();

    int result = 0;

    int end;

    int len[2][n + 1];

    int currRow = 0;

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                len[currRow][j] = 0;
            }
            else if (X[i - 1] == Y[j - 1])
            {
                len[currRow][j] = len[1 - currRow][j - 1] + 1;
                if (len[currRow][j] > result)
                {
                    result = len[currRow][j];
                    end = i - 1;
                }
            }
            else
            {
                len[currRow][j] = 0;
            }
        }

        currRow = 1 - currRow;
    }

    if (result == 0)
    {
        return "-1";
    }

    return X.substr(end - result + 1, result);
}

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
        string s1, s2;
        cin >> s1 >> s2;
        int m = s1.size();
        int n = s2.size();
        string ans = LCSubStr(s1, s2);
        if (ans == "-1")
        {
            cout << "NO\n";
        }
        else
        {
            if (s1 == s2)
            {
                cout << "YES\n";
                cout << s1 << '\n';
            }
            else if (s1[m - 1] == s2[n - 1])
            {
                cout << "YES\n";
                cout << '*' << s1[m - 1] << '\n';
            }
            else if (ans.size() == 1)
            {
                if (s1[0] == s2[0])
                {
                    cout << "YES\n";
                    cout << s1[0] << '*' << '\n';
                }
                else if (s1[m - 1] == s2[n - 1])
                {
                    cout << "YES\n";
                    cout << '*' << s1[m - 1] << '\n';
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "YES\n";
                cout << '*' << ans << '*' << '\n';
            }
        }
    }

    return 0;
}