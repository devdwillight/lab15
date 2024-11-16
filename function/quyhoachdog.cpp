#include <bits/stdc++.h>

using namespace std ;


 void funtion1 (){
// L[i] : do dai day con taang dai nhat ket thuc o chi so i 
int n ; cin >> n ;
vector <int>a(n) ;
    for ( int i =0 ; i<  n ; i++) cin >> a[i];
vector < int >l(n ,1) ;
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < i ; j ++){
            if ( a[i] > a[j]){
                l[i] = max ( l[i], l[j] + 1);
        }
    }
}
cout << *max_element ( l.begin() , l.end())<<endl ;
 }
 void funtion2(){
    int n , S ; cin >> n >> S ;
    int w[n+1];  // trọng lượng đồ vật thứ i 
    for ( int i = 1 ; i <= n ; i++) cin >> w[i];
    int v[n +1]; // giá trị đồ vật thứ i  
    for ( int i = 1 ; i <= n ; i++) cin >> v[i];
    int mb[n+1][S+1] ;
    memset(mb , 0 , sizeof( mb));
    for ( int i = 1 ; i <= n ; i++){
        for ( int j = 1; j <= S ; j++){
            mb[i][j] = mb[i-1][j];
        if ( j >= w[i]){
            mb[i][j] = max ( mb[i][j], mb[i-1][j - w[i]]+ v[i]); 
            //
            }
        }
    }
 }
 void funtion3(){// tim tong lon nhat bang S 
    // tong bang S neu co in ra 1 neu ko in ra  0 
    int S = 9 ; int n = 4 ;
    vector <bool> dp( S+1, false);
    vector <int >a = { 2,5,3,1};
    dp[0] = true ;
    for ( int i = 0 ; i <  n ; i++){
        for ( int j=S ; j >= a[i]; j--){
            if( dp[j-a[i]] == true){
                dp[j] = true ;
            }
        }
    }
    if ( dp[S]) cout << 1 <<endl ;
    else {
        cout << 0<<endl ;
    }
 }
 int main (){
    
    return 0 ; 
 }