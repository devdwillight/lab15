#include <bits/stdc++.h>
using namespace std ;
vector <int>adj[101];
bool visited[101];
void input(){
    int n, m ; cin >> n >> m ;
    for ( int i =1 ; i <=m ; i++ ){
        int x , y ; cin >> x >> y ;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false, sizeof(visited));
}
void bfs(int u){
    queue<int>qe ;  
    qe.push(u);
    visited[u] = true ;
    while(!qe.empty()){
        int v = qe.front();
        qe.pop();
        cout << v << " ";
        for ( int x : adj[v]){
            if ( visited[x] == false){
                qe.push(x);
                visited[x] = true ;
            }
        }
    }
}


int main (){
    input();
    bfs(1);
    return 0 ;
}