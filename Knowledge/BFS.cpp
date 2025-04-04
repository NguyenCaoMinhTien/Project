#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fi first
#define se second
const int maxn=1e6+7;
vector<int> a[maxn];
bool visited[maxn];
void BFS(int s)
{
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.empty()==false)
    {
        int v=q.front();
        q.pop();
        cout<<v<<"\n";
        for(auto it:a[v])
        {
            if(visited[it]==false)
            {
                q.push(it);
                visited[it]=true;
            }
        }
    }
}
int main()
{
//    freopen("DFS1.inp","r",stdin);
//    freopen("DFS1.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m,n,s;
    cin>>n>>m>>s;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    BFS(s);
    return 0;
}
