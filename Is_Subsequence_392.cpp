#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    int n = s.size();
    int m = t.size();
    int j = 0;
    for (int i = 0; i < m && j < n; i++)
    {
        if (s[j] == t[i])
        {
            j++;
        }
    }
    return j == n;
}

/* bool ok(string &s, string &t, int m, int n)
{
    if (m == 0)
        return true;
    if (n == 0)
        return false;

    if (s[m - 1] == t[n - 1])
        return ok(s, t, m - 1, n - 1);

    return ok(s, t, m, n - 1);
}

bool isSubsequence(string s, string t)
{

    if (ok(s, t, s.size(), t.size()))
        return true;

    return false;
} */

int main()
{
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1 = "cbc";
    string s2 = "abcdabc";
    cout << isSubsequence(s1, s2) << '\n';
}