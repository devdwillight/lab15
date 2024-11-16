#include <bits/stdc++.h>
using namespace std ;
// 1 . thuat toan sinh ke tiep.
 // cau hinh dau tien 
 // cau hinh cuoi cung 
 // phuong x`phap sinh
// next_permutation (a, a+ n) => sinh ra cau hinh ke tiep ;
 // <ktao cau hinh dau tien  >
 // while <khi chua phai cau hinh cuoi cung >
 // < in ra cau hinh tiep theo >

int n , k , a[1001] ,ok ;
void ktao(){
    for ( int i = 1 ; i<= n ; i ++){
        a[i] = 0 ;
    }
}
void sinh(){
    int i = n ;
    while ( i>= 0 && a[i] == 1){
        a[i] = 0;
        --i ;
    }
    if ( i==0){
        ok = 0 ;
    }
    else a[i] = 1 ; 
}
int main (){
    int t ;  t =1;
    while ( t--){
        cin >> n ;
        int w[n];
        for ( int i =1 ; i <=n ; i++ ){
            cin >> w[i]; 
        }
        ktao();
        ok= 1;
        long long  ans = 1e12;
        while (ok){
            long long  sum1 =0 , sum2= 0 ;
            for ( int i =1 ; i <=n ; i++){
                if ( a[i] == 0){
                    sum1 += w[i];
                }
                else sum2+=w[i];
            }
             ans = min(ans, abs(sum1-sum2));
            sinh();
            
        }
        cout <<endl;
        cout << ans ;

    }

    return 0 ;
}