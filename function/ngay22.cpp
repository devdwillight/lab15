#include <bits/stdc++.h>
using namespace std ;
int main (){
    /*
    int n , m ; cin >> n >> m;
    int a[n] ; int b [m];
    int i = 0 ; int j = 0;
    for ( int i = 0 ; i < n ; i++) cin >> a[i];
    for ( int j = 0 ; j< m ; j++) cin  >> b[j];
    long long ans = 0 ;
    while( i < n && j < m){
        if (a[i] > b [j] ){
            j++; continue;
        }
        else if  ( a[i] < b[j]){
            i ++; continue;
        }
        int dem1 = 0 , dem2 =0 ;
        while (  i< n&&a[i]== b[j]){
            dem1 ++ ; i ++ ;
        }
        int tmp = a[i -1 ];
        while ( j < m && tmp == b[j]){
            dem2++ ; j ++;
        }
    
    ans += 1ll*dem1 *dem2 ;
    }
    cout << ans;*/
    int n , k ; cin >> n >> k;
    int a [n];
    int l = 0 , r = 0 ;
    for ( auto &x : a) cin >> x ;
    int sum = 0 ; int ans = INT_MAX;
    for ( r = 0 ; r < n ; r ++){
        sum += a[r] ; r ++ ;
        while ( sum  >= k ){
            ans = min ( ans , sum);
            sum -= a[l]; l ++;
        }


    }
}