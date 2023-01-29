#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
    int i = a.length() - 1;
    int j = b.length() - 1;
    string ans;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        if (i >= 0)
        {
            carry += a[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            carry += b[j] - '0';
            j--;
        }

        ans += (carry % 2 + '0');
        carry = carry / 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;
    cout << addBinary(s1, s2) << '\n';
}