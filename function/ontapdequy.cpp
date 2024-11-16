#include <bits/stdc++.h>
using namespace std;
void  tong( int n ){
    if ( n == 0){
        return ;
    }
    else{ 
      tong (n /2);
    }
    cout << n % 2;
}
int tong(int a[], int n ){
    // base case
    if (n ==1){
        return a[0];
    }
    //general case 
    else {
        return tong (a,n -1 ) + a[n-1] ;
    }
} 
int main (){
    tong ( 9);
    return 0 ;
}