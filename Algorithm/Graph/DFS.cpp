#include <bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define LL          long long
#define FOR(i,n)    for(int i=0;i<n;i++)
#define rep(i,k,n)  for(int i=k; i<n; i++)
#define repp(i,k,n) for(int i=k; i<=n; i++)

vector<vector<int>>adj;  
void DFS(int node, int vis[]) {
    //cout << node << " ";
    vis[node] = 1;
    for(auto i : adj[node]) {
        if(!vis[i]) {
            DFS(i, vis);
        }
    }
}

int main(){
    BOOST;
    int count=0;
    int n;
    cin>>n;
    adj.assign(n+1, vector<int>());
    int m;
    cin>>m;
    rep(i,0,m){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int vis[n+1]={0};
    rep(i, 1, n+1){
        if(vis[i]==0){
            //BFS(i,vis);
            DFS(i,vis);
            count++;
            // cout<<i<<endl;
        }
    }
    cout<<count<<endl;
    return 0;
}
