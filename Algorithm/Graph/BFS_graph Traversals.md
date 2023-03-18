**Adjacent vertex:** is a vertex that is connected to v by an edge.

**Queue:** First In, First Out 

**BFS:** Tree Searching Algorithm

Loop visit from root node 

**BFS**
1. Use Queue
2. Je Vertex nia kaj korbo tar adjacent Vertex Queue te insert korbo.
3. Visited Vertex Notun kora insert hoba na 
4. Inserted Vertex repeat hoba na 

````cpp
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
#define N           7   //number of node
vector<int> adj[N];     //adj array create in a vector 
int vis[N];             //Visited array 

void BFS(int node) {    //bfs method
    queue<int> q;       //create a queue - q 
    q.push(node);       //first Insert the node into queue
    vis[node] = 1;      //make the node visited

    while(!q.empty()) {        //Until Queue q is empty
        int n1 = q.front();    //keep the front(queue) node in n1 variable  
        q.pop();               //delete the node from queue q
        cout << n1 << " ";     //print the node
        for(int i : adj[n1]) { //Foreach loop //
            if(!vis[i]) {      //if not visited
                q.push(i);     //value insert into queue 
                vis[i] = 1;    //make i index visited
            }
        }
    }
}

int main() {
    BOOST;

    int m;
    cin >> m ;
    for(int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);     //for adjacent list issue intert the u into v . and v into u.
        adj[v].push_back(u);
    }

    for(int i=0; i<N; i++) {     //if there is no connection with to components , thats why we check visited or not visited
        if(!vis[i]) {            //if Not visited
            BFS(i);              //use recursive call
        }
    }

    return 0;
}
````
**MODULE_1**
**INPUT**
1. Number of nodes/vertices
2. Label for each node
3. Edges present or not (1/0)

**Output**
Display Adjacency matrix for given graph

**MODULE_2**
1. Set status of each node to 1
2. Initialige Queue data structure and operations
3. BFS algorithn

