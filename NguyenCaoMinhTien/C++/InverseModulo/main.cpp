#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll maxn=1e6+7;
ll a[maxn];
const int MOD=1e9+7;
//----------------------------------------------
int solve(ll base,ll exp,ll m)
{
    ll res=1;
    while(exp!=0)
    {
        if(exp%2==1) res=(res*base)%m;
        base=(base*base)%m;
        exp/=2;
    }
    return res;
}
//----------------------------------------------
int main()
{
    //freopen("test.inp","r",stdin);
    //freopen("test.out","w",stdout);
    //freopen("test.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a;
    cin>>a;
    cout<<solve(a,MOD-2,MOD);
    return 0;
}
//-----------------------------------------------
