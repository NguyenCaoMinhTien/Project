#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
const int MOD=1e9+7;
const int maxn=1e6+7;
ll a[maxn];
int n;
int main()
{
    //freopen("test.txt","r",stdin);
    //freopen("apair.inp","r",stdin);
    //freopen("apair.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin>>q;
    while(q--)
    {
        ll k;
        cin>>k;
        int j=1;
        while(true)
        {
            ll tmp=j*9*pow(10,j-1);
            if(k<tmp) break;
            else{
                k-=tmp;
                j++;
            }
        }
        ll cnt=k/j;
        ll x=k%j;
        ll res=pow(10,j-1)+cnt-1;
        string s=to_string(res);
        cout<<res<<" "<<s[x+1]<<"\n";
    }
    return 0;
}
