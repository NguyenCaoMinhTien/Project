#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int MOD=1e9+7;
const int maxn=1e6+7;
int cnt[100];
int GT(int x)
{
    if(x==0) return 0;
    ll res=1;
    for(int i=1;i<=x;i++) x=(x*i)%MOD;
    return res;
}
int Inverse(int base,int exp,int m)
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
int C(int a,int b)
{
    return GT(a)*Inverse(GT(b)*GT(a-b),MOD-2,MOD);
}
int A(int a,int b)
{
    return GT(a)*Inverse(GT(a-b),MOD-2,MOD);
}
int Fib(int a)
{
    ll res=0;
    int t1=0;
    int t2=1;
    for(int i=2;i<=a;i++)
    {
        res=(t1+t2)%MOD;
        t1=t2;
        t2=res;
    }
    return res;
}
int P(int n)
{
    return GT(n);
}
int PLap(string a)
{
    for(int i=0;i<a.size();i++) cnt[a[i]]++;
    ll res=1;
    for(int i=65;i<=90;i++) res=(res*GT(cnt[i]))%MOD;
    return GT(a.size())*Inverse(res,MOD-2,MOD);
}
int Catalan(int n)
{
    return GT(2*n)*Inverse((GT(n+1)*GT(n))%MOD,MOD-2,MOD);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    string s;
    return 0;
}
