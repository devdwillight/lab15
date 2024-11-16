#include <bits/stdc++.h>
using namespace std ;
//linear seacrch 0(n) tìm x có trong mảng hay ko
// bool ls(int a[] , int n , int x)
// binary_ search ( a + x , a + y , key)
// binary_search ( a , a + 4 , key)
// binary_ search ( s.begin () + x , s.end() + y , key)
// lower_power(iter 1 , inter 2 , key) [inter 1 , inter 2 )=> tra ve vi tri cua phan tu dau tien => key
//upper_power ( inter 1 , inter 2 , key )[inter 1 , inter 2 )=> tra ve vi tri cua phan tu dau tien > key
bool is(int a[] , int n , int x){
    int l =0 ; int r = n -1 ;
    while (l <= r){
        int m =( r + l) / 2 ;
        if ( a[m] == x ) return true ;
        else if(a[m] < x) {
             l = m + 1 ;
        }
        else {
            r = m -1 ;
        }
    }
    return false ;
}
int first_pos( int a [] , int n , int x){
    // tim so xuat hien dau tien 
    int l = 0 ; int r = n -1 ;
    int res = -1 ;
    while ( r >=l){
        int m = (r + l) / 2 ;
        if ( a[m] == x){
            res =m ;
            r = m -1 ;
        }
        else if ( a[m] < x){
            l = m + 1;
        }
        else r = m -1 ;
    }
    return res ;
}
// tim so  xuat hien cuoi cung
    int last_pos ( int a[] , int n , int x){
        int l = 0 ; int r = n -1 ;
        int res = -1 ;
        while (r >= l){
            int m = ( r + l) /2 ;
            if ( a[m] == x){
                res = m ;
                l = m + 1 ;
            }
            else if ( a[m] < x){
                l = m + 1 ;
            }
            else r =m -1;
        }
        return res ;
}
// ap dung cho mang , vector da sap xep . neu ko tim thay thi no tra ve inter 2 
int main (){
int n , k ; cin >> n >> k ;
int a [n];
for ( auto &x:a) cin >> x ;
auto it = lower_bound(a , a+ n ,  k);
cout << *it <<endl ;
cout << it - a ; // vi tri
return 0 ;
}