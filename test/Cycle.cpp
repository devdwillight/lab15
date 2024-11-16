#include <bits/stdc++.h>
using namespace std ;
vector <int>adj[101] ;
int parent[101];
bool visited[101];
int n , m ,st ,en ;
// đồ thị vô hướng .
void inp(){
    for ( int i = 1 ; i < m ; i++){
        int x , y ; cin >> x >> y ;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited , false , sizeof(visited));
    memset( parent , 0 , sizeof(parent));
}

bool dfs( int u){
visited[u] = true ;
for ( int v : adj[u]){
    if ( !visited[v]){
        parent[v] = u ;
         if (dfs(v)) return true;
        }
    else if ( v != parent[u]){
        st = v ; en = u;
        return true ;
        }
    }
    return false ;
}
int main (){
    cin >> n >> m ;
    inp();
    for ( int i =1 ; i <=n ; i++){
        if( !visited[i]){
            if ( dfs(i)){
                cout << " YES"<<endl ;
                vector <int>Cycle ;
                Cycle.push_back(st);
                while (en != st){
                    Cycle.push_back(en);
                    en = parent[en];
                }
                Cycle.push_back(st);
                reverse( Cycle.begin(), Cycle.end());
                for ( int x : Cycle){
                    cout << x << " ";
                }
            }
        }
    }
    return 0 ;
}