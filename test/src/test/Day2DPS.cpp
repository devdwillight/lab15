#include <bits/stdc++.h>
using namespace std ;
vector <int> adj[101];
bool visited[101] ; 

void input(){
    int n , m ; cin >> n >> m;
    for ( int i = 1 ; i <=m ; i++){
        int x , y ; cin >> x >> y ;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited , false , sizeof(visited));
}
void dfs( int u){
    cout << u << " " ;
    visited[u] = true ;// đánh dấu đã đi qua 
    for ( int v : adj[u]){// duyet qua nhung canh ke cua u;
    if ( visited[v] == false ){
        dfs(v);
        }
    }
}

int main (){
    input();
    dfs(1);

    return 0 ;
}