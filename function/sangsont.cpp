#include <bits/stdc++.h>
using namespace std ;
/*bool nt ( int n){
    for ( int i = 2 ; i <= sprt (n ); i++){
        if ( n%i == 0){
            return 0;
        }
    }
        return n > 1 ;
    
}*/ //eratosthenes
/*int prime[10001];
void sangso(){
    // coi tat ca la snt
    for ( int i = 0 ; i < 10001;i++){
        prime[i] = 1 ;
    }
    prime[0] = 0; prime [1] = 0;
    for ( int i= 2 ; i <= 100; i++ ){
        if( prime[i]){
            for ( int j = i * i; j <= 100000; j+=i){
                prime [j] = 0;
            }
        }
    }
}*/
int main(){
    int n; cin >> n ;
    for ( int i = 31 ; i >=0; i--){
        if ( n & ( 1 << i)){
            cout << "1";
        }
        else cout << "0";

    }
    
    
    return 0;
} 