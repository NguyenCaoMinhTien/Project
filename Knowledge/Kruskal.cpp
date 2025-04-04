#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fi first
#define se second
const int maxn=1e6+7;
const int maxd=1e9+7;
vector<tuple<int,int,int>> a;
ll parent[maxn];
bool check[maxn];
int n,m,w;
//------------------------------------------------
void Read()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        a.push_back(make_tuple(w,u,v));
    }
    sort(a.begin(),a.end());
    for(int i=1;i<=n;i++) parent[i]=i;
}
//------------------------------------------------
ll GetRoot(ll u)
{
    if(u==parent[u]) return u;
    else return GetRoot(parent[u]);
}
//------------------------------------------------
void Kruskal()
{
    ll cnt=0,res=0;
    for(int i=0;i<m;i++)
    {
        ll x=GetRoot(get<1>(a[i]));
        ll y=GetRoot(get<2>(a[i]));
        if(x!=y)
        {
            cnt++;
            res+=get<0>(a[i]);
            parent[y]=x;
            check[i]=true;
        }
    }
    if(cnt<n-1) res=-1;
    if(res>-1)
    {
        cout<<res<<"\n";
        for(int i=0;i<=m;i++)
        {
            if(check[i]) cout<<get<1>(a[i])<<" "<<get<2>(a[i])<<"\n";
        }
    }
    else cout<<-1;
}
//-------------------------------------------------
int main()
{
//    freopen("amintree.inp","r",stdin);
//    freopen("amintree.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Read();
    Kruskal();
    return 0;
}

//6 9
//1 2 1
//1 3 1
//2 4 1
//2 3 2
//2 5 1
//3 5 1
//3 6 1
//4 5 2
//5 6 2
