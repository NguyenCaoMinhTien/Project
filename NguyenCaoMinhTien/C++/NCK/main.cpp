#include<iostream>

using namespace std;
#define int unsigned long long
const int p=1e9+7;
//----------------------------------------------
int ftrM(int bg,int ed,int md)
{
    int res=1;
    while(bg!=ed+1){
        (res*=(bg%md))%=md;
        bg++;
    }
    return res;
}
int inv(int val,int md)
{
    val%=md;
    int res=1,exp=md-2;
    while(exp){
        if(exp&1){
            (res*=val)%=md;
        }
        (val*=val)%=md;
        exp>>=1;
    }
    return res;
}
//----------------------------------------------
signed main()
{
    //freopen("test.inp","r",stdin);
    //freopen("test.out","w",stdout);
    //freopen("test.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    cout<<(ftrM(k+1,n,p)*inv(ftrM(2,n-k,p),p))%p;
    return 0;
}
//-----------------------------------------------
