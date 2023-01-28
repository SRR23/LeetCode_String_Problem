#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string str;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ||
            s[i] >= '0' && s[i] <= '9')
        {
            str.push_back(s[i]);
        }
    }
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int len = str.size();
    bool ok = true;
    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            ok = false;
        }
    }
    return ok;
}

int main()
{
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s = "A man, a plan, a canal: Panama";
    if (isPalindrome(s))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}