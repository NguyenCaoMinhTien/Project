#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll maxn=1e6+7;
ll a[maxn];
const int MOD=1e9+3;
//----------------------------------------------
ll F(ll k)
{
    int res,x=0,y=1;
    for(ll i=2;i<=k;i++)
    {
        res=(x+y)%MOD;
        x=y;
        y=res;
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
    ll n;
    cin>>n;
    cout<<F(n);
    return 0;
}
//-----------------------------------------------
