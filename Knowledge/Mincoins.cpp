#include<bits/stdc++.h>
using namespace std;

const int nmax=1e6+10;
int c[101];
int f[nmax];
const long long m = 1e9+7;
//------------------
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
        cin>>c[i];
    f[0]=1;
        for(int i=1;i<=n;i++)
    for(int j=1;j<=x;j++)
        {
            if (j>=c[i])
                f[j]=(f[j]%m + f[j-c[i]]%m)%m;
        }
    cout<<f[x];
}
