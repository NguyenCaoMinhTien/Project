#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
const int MOD=1e9+7;
const int maxn=1e6+7;
ll f[100];
ll cnt[100];
ll solve(int n,int k)
{
    if(n==1) return f[1];
    if(n==0) return f[0];
    ll res=0;
    if(k>cnt[n-2]) res=f[n-2]+solve(n-1,k-cnt[n-2]);
    else res+=solve(n-2,k);
    return res;
}
int main()
{
    //freopen("test.txt","r",stdin);
    //freopen("apair.inp","r",stdin);
    //freopen("apair.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    f[0]=1;
    cnt[0]=1;
    cnt[1]=1;
    for(int i=2;i<=45;i++)
    {
       f[i]=f[i-2]+f[i-1];
       cnt[i]=cnt[i-2]+cnt[i-1];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<solve(n,k)<<"\n";
    }
    return 0;
}
/*
4
0 1
1 1
3 2
7 7
*/
