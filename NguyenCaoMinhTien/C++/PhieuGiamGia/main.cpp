#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD=1e9+7;
const int maxn=1e6+7;
ll a[maxn];
ll n,k,x;
void solve1()
{
    for(int i=1;i<=n;i++)
    {
        if(k==0) break;
        ll t=a[i]/x;
        if(t>k)
        {
            a[i]-=k*x;
            k=0;
        }
        else
        {
            a[i]-=t*x;
            k-=t;
        }
    }
}
int main()
{
    //freopen("test.txt","r",stdin);
    //freopen("test.inp","r",stdin);
    //freopen("test.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k>>x;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<ll>());
    solve1();
    if(k!=0) sort(a+1,a+n+1,greater<ll>());
    ll res=0;
    for(int i=1;i<=n;i++)
    {
        if(k!=0)
        {
            k--;
            continue;
        }
        else res+=a[i];
    }
    cout<<res;
    return 0;
}
