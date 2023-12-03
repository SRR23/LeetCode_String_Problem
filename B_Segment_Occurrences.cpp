#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<ll> v;
    ll n,m,k;
    cin>>n>>m>>k;
    string s,x;
    cin>>s>>x;
    v.push_back(0);
    for(int i=0;i<=n-m;i++)
    {
        v.push_back(v.back()+(s.substr(i,m)==x));
    }
    while(k--)
    {
        ll a,b;
        cin>>a>>b;
        if(b-a+1<m)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<v[b-m+1]-v[a-1]<<endl;
        }
    }
    return 0;
}