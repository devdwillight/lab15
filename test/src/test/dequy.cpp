#include <bits/stdc++.h>
using namespace std ;
int tong ( int n ){
    if ( n ==1){
        return 1 ;
    }
    else {
        return n + tong (n-1) ;
    }
}
   int tohop ( int n , int k){
    // base case
    if ( k = 0 || n == k ){
        return 1 ;
    }
    //general case 
    else {
        return tohop( n -1, k) + tohop(n -1 ,k -1); // truy hoi
    }
}
int doixung( int a[] , int l ,int r){
    if ( l > r){
        return 1 ;
    }
    if ( a[l] != a[r]){
        return 0 ;
    }
    else
    return doixung(a , l + 1 , r - 1) ;
}

int main (){
    int n ;
    cin >> n ;
    int a [n]; 
    int l , r ;
    for ( int &x : a) cin >> x ;
    if ( doixung ( a , 0, n -1 )) cout << "YES" ;
    else cout << "NO" ;
    return 0 ;
}