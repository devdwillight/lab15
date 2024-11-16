#include<bits/stdc++.h>
#include <queue>
using ll = long long ;
using namespace std ;
//FIFO 
//0(1)
// push
// pop
// size
//empty
// front
int ans[100];
void kiemtra(){
    vector <ll  > v ;
    queue <string > p ;
    p.push("9");
    v.push_back(stoll("9"));
    while (1){
        string top = p.front();
        p.pop();
        if ( top.length() == 11) break ;
        v.push_back( stoll(top +"0"));
        v.push_back(stoll( top +"9"));
        p.push( top +"0");
        p.push( top + "9");
    }
    for ( int i =1 ; i <= 100 ; i++){
        for ( auto &x : v){
            if ( x % i == 0){
                ans[i] = x ;
                break ;
            }
        }
    }
}
void sinh(){
    vector<string>res;
    queue<string>q ;
    q.push("1");
    res.push_back("1");
    while(res.size()< 10001){
        string top = q.front() ;
        q.pop();
        res.push_back( top + "0");
        res.push_back(top +"1");
        q.push( top +"0");
        q.push(top +"1");
    }

}
int solve ( int n , int m ){
    queue <pair<int ,int >>q ;
    set<int>se ;
    q.push({n,0});
    while ( !q.empty()){
        pair<int ,int > top = q.front();
        q.pop();
        if( top.first * 2 == m ) return top.second ;
        if ( top.first * 2 == m || top .first -1 == m ) return top.second + 1 ;
        if ( se.find ( top.first * 2) == se.end() &&  top.first < m){
            q.push ( {top.first * 2, top.second + 1  });
            se.insert ( top.first * 2) ;
        }
        if ( se.find( top.first - 1 )== se.end()&& top.first > 1 ){
            q.push ({top.first -1 , top.second + 1 });
            se.insert ( top.first - 1) ;
        }
    }
}

int main (){ 
    int n, m ; cin >> n >> m ;
    cout << solve( n, m);
    
    return 0 ;
}