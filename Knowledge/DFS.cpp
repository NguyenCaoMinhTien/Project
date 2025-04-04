#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fi first
#define se second
const int maxn=1e6+7;
vector<int> a[maxn];
bool visited[maxn];
void DFS(int s)
{
    if(visited[s]==true) return;
    cout<<s<<" ";
    visited[s]=true;
    for(auto it:a[s]) DFS(it);
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
    DFS(s);
    return 0;
}
