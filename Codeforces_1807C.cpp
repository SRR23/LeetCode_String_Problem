
// You are given a string s consisting of lowercase Latin characters. In an operation,
// you can take a character and replace all occurrences of this character with 0 or
// replace all occurrences of this character with 1.

// Is it possible to perform some number of moves so that the resulting string is an
// alternating binary string†?

// An alternating binary string is a string of 0s and 1s such that no two adjacent bits
// are equal.

#include <bits/stdc++.h>
using namespace std;

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
        unordered_map<char, char> mp;
        mp[s[0]] = '0';
        char last = '0';
        bool flag = true;
        for (int i = 1; i < s.size(); i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                if (last == mp[s[i]])
                {
                    flag = false;
                    cout << "NO" << endl;
                    break;
                }
                else
                {
                    last = mp[s[i]];
                }
            }
            else
            {
                if (last == '0')
                {
                    last = mp[s[i]] = '1';
                }
                else
                {
                    last = mp[s[i]] = '0';
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
    }
}

// Another solution
/*
#include<bits/stdc++.h>
using namespace std;
void Eman(){
    int freqo[26]={0};
    int freqe[26]={0};
    int n,flag=0;;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(i%2==0)
        ++freqe[s[i]-'a'];
        else
        ++freqo[s[i]-'a'];
    }
    for(int i=0;i<26;i++){
        if(freqo[i]>0&&freqe[i]>0){
        cout<<"NO\n";
        flag=1;
        break;
        }
    }
    if(!flag)
    cout<<"YES\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Eman();
    }
}
*/

// Another solution
/*
#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ar[26][2];
    for (int i = 0; i < 26; i++)
    {
        ar[i][0] = -1;
        ar[i][1] = -1;
    }

    for (int i = 0; i < n; i++) {
        ar[s[i] - 'a'][i % 2] = 2;
    }

    bool ok = true;
    for (int i = 0; i < 26; i++) {
        if (ar[i][0] > -1 and ar[i][1] > -1)
            ok = false;
    }
    cout << (ok ? "YES\n" : "NO\n");
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

    int t; cin >> t;
    while (t--)
        solve();
}
*/

// Codeforces_1807D
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<int,bool>vis;
set<int>st;
void dfs(int n,int N,int k){
    if(n>=N)return;
    if(n<0)return;
    if(vis[n])return;
    st.insert(n);
    vis[n]=true;
    dfs(n+k,N,k);
    dfs(n+k+1,N,k);
    dfs(n-k,N,k);
    dfs(n-k-1,N,k);

}
void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n+1);
    vector<ll>pref(n+1);
    cin>>a[1];
    pref[1]=a[1];
    for(int i=2;i<=n;i++){
        cin>>a[i];
        pref[i]=pref[i-1]+a[i];
    }
    for(ll i=0;i<q;i++){
        ll l,k,r;
        cin>>l>>r>>k;
        ll sum=0;
        sum=pref[n]+(r-l+1)*k-(pref[r]-pref[l]+a[l]);

        if(sum%2)cout<<"yes"<<"\n";
        else cout<<"no"<<"\n";

    }

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
*/