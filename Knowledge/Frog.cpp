#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fi first
#define se second
const int maxn=1e6+7;
ll a[maxn];
ll f[maxn];
int main()
{
//    freopen("arrzip.inp","r",stdin);
//    freopen("arrzip.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=2;i<=n;i++)
    {
        ll MIN=INT_MAX;
        for(int j=1;j<=k;j++)
        {
            if(i<=j) continue;
            MIN=min(MIN,f[i-j]+abs(a[i]-a[i-j]));
        }
        f[i]=MIN;
    }
//    for(int i=1;i<=n;i++) cout<<f[i]<<" ";
//    cout<<"\n";
    cout<<f[n];
    return 0;
}
