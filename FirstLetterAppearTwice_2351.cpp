#include <bits/stdc++.h>
using namespace std;

char repeatedCharacter(string s)
{
    char ch;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        if (mp.find(s[i]) != mp.end())
        {
            ch = s[i];
            break;
        }
        mp[s[i]] = i;
    }
    return ch;
}

int main()
{
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s = "abccbaacz";
    cout << repeatedCharacter(s) << '\n';
}