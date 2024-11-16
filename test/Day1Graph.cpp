#include <bits/stdc++.h>
// cach chuyen doi : 
// ma tran ke
//danh sach canh 
//danh sach ke (adjacency list)
//vector <int >adj[i];

using namespace std ;
int a[101][101];
vector <int>adj[101];
vector <pair<int ,int > >edge ;
// bai 1 : danh sach canh -> ma tran ke 
int function1(){
    int n , m ; cin >> n >> m ;// so dinh va so canh 
    for ( int i =1 ; i <=m ; i++){
        int x, y ; cin >> x >> y;
        a[x][y] = a[y][x] = 1 ;
    }
    for ( int i =1 ; i <= n ;i++){
        for ( int j = 1 ; j <=n ; j++){
            cout << a[i][j] << " ";
        }
        cout << endl ;
    }
}
//Bai 2 : danh sach canh -> danh sach ke
int function2(){
 int n , m ; cin >> n >> m;
 for ( int i = 1; i <=m ;i ++){
    int x, y ; cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
 }
 for ( int i =1 ; i <=n ; i++){
    cout << i << " : ";
    for ( auto x : adj[i]){
        cout << x << " " ; 
    }
    cout << endl;
 }
}
//Bai3:  matranke -> danhsachcanh
int function3(){
    int n ; cin >> n;
    for ( int i = 1 ;i <=n; i++){
        for ( int j = 1 ; j <=n ;j ++){
            cin >> a[i][j];
        }
    }
    for ( int i =1 ; i <=n ; i++){
        for (int j =1 ; j <=n; j++){
            if ( a[i][j] && i < j){
                edge.push_back({i, j});
            }
        }
    }
    for ( auto &x : edge) {
        cout << x.first << " " << x.second << endl ; 
    }
}
//Bai4 : danh sach ke -> matranke 
int function4(){
    int n; cin >> n ;
    for ( int i = 1 ; i <=n;i++){
    string s ,num ;
    cin.ignore();
    getline(cin,s);
    stringstream ss (s);
    while(ss >> num){
            a[i][stoi(num)] == 1 ;
        }
    }
    for ( int i = 1 ;i <= n ; i++){
        for (int j = 1; j <= n ; j++){
            cout << a[i][j] <<" ";
        }
        cout << endl ;
    }
}
//bai 5 : danh sach ke -> danh sach canh
int function5(){
    int n ; cin >> n ; 
string s, token ;
    cin.ignore();
for ( int i = 1 ; i <= n ; i++){
    getline(cin, s);    
    
    stringstream ss(s) ;
    while ( ss >> token){
        if ( i < stoi(token)){
        edge.push_back({i,stoi(token)});
        }
    }
}
for ( auto &it : edge){
    cout << it.first <<" "<<it.second <<endl ;
}

}
// Bai6 ; matranke -> danhsach ke
/*int function6 (){
    for ( int i =1 ; i <=5 ; i++){
        for ( int j =1 ; j <= 5 ; j++){
            if ( a[i][j] ){
                adj[i].push_back(j);               
            }
        }
    }
}*/

int main (){
    
    return 0 ;
}