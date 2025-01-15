#include <bits/stdc++.h>
#define   CART 5 
using namespace std ;

void Draw ( int *drawn, int nDraw){
    int  n , notDrawn, skip, keepLooking ;
    notDrawn = CART ; // so luong the 
    for ( int i = 0 ; i < nDraw ; i++){
        n = rand() % notDrawn ;
        skip = 0 ;
        keepLooking = 1  ;// check neu dung thi thoat vong for 
        for ( int j = 0 ; j < notDrawn && keepLooking == 1 ; j ++){
            if ( drawn[j] == 0 && skip == n){
                keepLooking = 0 ;
                drawn[j] = 1 ;
            }
            else if ( drawn[j]==0)
                skip ++ ;
        }
        notDrawn-- ;
    }
}

int main (){
int k ; cin >> k ;
srand(time(0));
int *a =new int[CART];
for ( int i = 0 ; i < CART ;i++){
    a[i]= 0 ;
}
Draw ( a , k);
for ( int i = 0 ; i < CART ; i ++){
    cout << a[i]<<" " ;
}
delete[] a ;
    return 0 ;
}
