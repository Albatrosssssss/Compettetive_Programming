// ---------------------------------------------------------------------//
//                           Assalamualaikum                            //
//             American International University Bangladesh             //
//                            Binarybeast004                            //
// ---------------------------------------------------------------------//
#include <bits/stdc++.h>
using namespace std;
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define LL          long long
#define FOR(i,n)    for(int i=0;i<n;i++)
#define rep(i,k,n)  for(int i=k; i<n; i++)
#define repp(i,k,n) for(int i=k; i<=n; i++)

vector<vector<int>>adj;  
   //adj array create in a vector 
void BFS(int node,int vis[]){
    queue<int> q;
    q.push(node);
    vis[node] = 1;

    while(!q.empty()){
        int n1=q.front();
        q.pop();
        //cout<<n1<<" ";
        for(int i: adj[n1]){
            if(!vis[i]){
                q.push(i);
                vis[i]=1;
            }
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
    rep(i,1,n+1){
        if(!vis[i]){
            BFS(i,vis);
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
