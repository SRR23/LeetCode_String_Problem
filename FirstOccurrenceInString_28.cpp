#include <bits/stdc++.h>
using namespace std;

// Time Complexity(O(n))
int strStr(string s1, string s2)
{
    int index = s1.find(s2);
    if (index != string::npos)
    {
        return index;
    }
    return -1;
}

// Another Approch(O(n))
/* int strStr(string haystack, string needle)
{
    if (haystack.size() < needle.size())
        return -1;

    int lock = 0, key = 0;
    for (int i = 0; i < needle.size(); ++i)
    {
        lock ^= needle[i];
        key ^= haystack[i];
    }

    for (int i = 0; i <= haystack.size() - needle.size(); ++i)
    {
        if (key == lock && haystack.substr(i, needle.size()) == needle)
            return i;
        key ^= haystack[i] ^ haystack[i + needle.size()];
    }

    return -1;
} */

// Another Approch(O(n*m))
/* int strStr(string haystack, string needle)
{
    int i, j;
    int len1 = haystack.size(), len2 = needle.size();
    for (i = 0; i <= len1 - len2; i++)
    {
        for (j = 0; j < len2; j++)
        {
            if (haystack[i + j] != needle[j])
            {
                break;
            }
        }
        if (j == len2)
        {
            return i;
        }
    }
    return -1;
} */

int main()
{
    // freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1 = "leetcode";
    string s2 = "leet";
    cout << strStr(s1, s2) << '\n';
    return 0;
}

// git commit -m "first commit"
// git branch -M main
// git remote add origin https://github.com/SRR23/LeetCode_String_Problem.git
// git push -u origin main