#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    int x = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            x++;
        }
        if (s[i] == ' ')
        {
            if (x > 0)
            {
                break;
            }
        }
    }
    return x;
}

int main()
{
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s = "   fly me   to   the moon  ";
    cout << lengthOfLastWord(s) << '\n';
}