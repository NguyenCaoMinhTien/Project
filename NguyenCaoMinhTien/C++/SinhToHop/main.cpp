#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;
int a[100];
void ketqua()
{
    for(int i=1;i<=k;i++) cout<<a[i];
    cout<<"\n";
}
void sinh(int i)
{
    for(int j=a[i-1]+1;j<=n-k+i;j++)
    {
        a[i]=j;
        if(i==k) ketqua();
        else sinh(i+1);
    }
}
int main()
{
    //freopen("1.txt","r",stdin);
    //freopen("asinhtohop.inp","r",stdin);
    //freopen("asinhtohop.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    sinh(1);
    return 0;
}
