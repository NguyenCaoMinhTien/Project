#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD=1e9+7;
const int maxn=1e6+7;
ll F[maxn];
ll a[maxn];
int n;
int GCD(int a,int b){
   int r=a%b;
   if(r==0) return b;
   else return GCD(b,r);
}
void ToBinary(int n){
    if(n==0) return;
    else
    {
        int r=n%2;
        ToBinary(n/2);
        cout<<r;
    }
}
long long Pow(int base,int exp){
    if(exp==0) return 1;
    return base*Pow(base,exp-1);
}
long long Fib1(int n){
    if(n==1 || n==2) return 1;
    else return Fib1(n-1)+Fib1(n-2);
}
long long Fib2(int n){
    if(F[n]>0) return F[n];
    if(n==1 || n==2) return F[n]=1;
    return F[n]=Fib2(n-1)+Fib2(n-2);
}
long long C(int n,int k){
    if(n==k || k==0) return 1;
    return C(n-1,k-1)+C(n-1,k);
}
long long Catalan(int n) {
    if(n==0) return 1;
    long long res=0;
    for(int i=0;i<n;i++)
    {
        res+=Catalan(i)*Catalan(n-i-1);
    }
    return res;
}
bool Palindrom(string s,int left,int right){
    if(left>=right) return true;
    if(s[left]!=s[right]) return false;
    return Palindrom(s,left+1,right-1);
}
long long SumI(int x,int n){
    if(x==n) return n;
    else return x+SumI(x+1,n);
}
long long SOEND(int n){
    if(n%2==1) n--;
    if(n==0) return 0;
    else return SOEND(n-2)+n;
}
long long SOENI(int x,int n){
    if(n%2==1) n--;
    if(x==n) return n;
    else return x+SOENI(x+2,n);
}
long long FacI(int x,int n){
    if(x==n) return n;
    else return x*FacI(x+1,n);
}


void Sinh(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<"\n";
}
void Binary(int j){
    for(int i=0;i<=1;i++)
    {
        a[j]=i;
        if(j==n) Sinh();
        else Binary(j+1);
    }
}
int main()
{
    //freopen("test.txt","r",stdin);
    //freopen("test.inp","r",stdin);
    //freopen("test.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    Binary(1);
    return 0;
}
