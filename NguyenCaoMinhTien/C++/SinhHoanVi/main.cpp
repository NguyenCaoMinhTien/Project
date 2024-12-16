#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
const int MOD=1e9+7;
const int maxn=1e6+7;
ll a[100];
bool used[100];
int n;
void Sinh(int j)
{
    for(int i=1;i<=n;i++)
    {
        if(used[i]==false)
        {
            a[j]=i;
            used[i]=true;
            if(j==n)
            {
                for(int k=1;k<=3;k++) cout<<a[k]<<" ";
                cout<<"\n";
            }
            else Sinh(j+1);
            used[i]=false;
        }
    }
}
int main()
{
    //freopen("test.txt","r",stdin);
    //freopen("apair.inp","r",stdin);
    //freopen("apair.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    Sinh(1);
    return 0;
}
