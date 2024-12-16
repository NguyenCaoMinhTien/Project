#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD=1e9+7;
const int maxn=1e6+7;
ll A[maxn];
ll B[maxn];
bool C[maxn];
int main()
{
    //freopen("test.txt","r",stdin);
    //freopen("test.inp","r",stdin);
    //freopen("test.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        A[i]=a+b+c;
        B[i]=A[i];
    }
    sort(B+1,B+n+1);
    for(int i=1;i<=n;i++) if(B[i]+300>=B[n-k+1]) C[B[i]]=1;
    for(int i=1;i<=n;i++)
    {
        if(C[A[i]]==1) cout<<"Yes";
        else cout<<"No";
        cout<<"\n";
    }
    return 0;
}
