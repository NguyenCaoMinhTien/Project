#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fi first
#define se second

const int MOD=1e9+7;
const int maxn=1e3+7;
const ll MAX=1e9+7;
ll parent[maxn];
bool visited[maxn];
typedef pair<int,int> ii;
vector<ii> a[maxn];
int n,m,s,t;

//--------------------------------------------------------
void Read()
{
    cin>>n>>m>>s>>t;
    for(int i=1;i<=m;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        a[x].push_back(make_pair(y,w));
//        a[y].push_back(make_pair(x,w));
    }
}
//--------------------------------------------------------
void Dijsktra(int s)
{
    vector<ll> d(n+1,MAX);
    d[s]=0;
    priority_queue<ii,vector<ii>,greater<ii>> Q;
    Q.push(make_pair(0,s));
    while(Q.empty()==false)
    {
        ii top=Q.top(); Q.pop();
        int u=top.se;
        int dis=top.fi;
        if(dis>d[u]) continue;
        for(auto it:a[u])
        {
            int v=it.fi;
            int w=it.se;
            if(d[v]>d[u]+w)
            {
                parent[v]=u;
                d[v]=d[u]+w;
                Q.push(make_pair(d[v],v));
            }
        }
    }
    cout<<d[t]<<"\n";
    int x=t;
    while(x!=s)
    {
        cout<<x<<"<-";
        x=parent[x];
    }
    cout<<s;
}
//---------------------------------------------------------
int main()
{
    //freopen("test.txt","r",stdin);
    //freopen("bdijsktra.inp","r",stdin);
    //freopen("bdijsktra.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Read();
    Dijsktra(s);
    return 0;
}
/*
6 7 1 4
1 2 1
1 6 10
2 3 2
3 4 20
3 6 3
5 4 5
6 5 4
*/
