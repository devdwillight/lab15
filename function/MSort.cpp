#include <bits/stdc++.h>
using namespace std ;

void merge(int a[], int r,int m ,int l ){
    vector <int>  x (a + l, a +m +1 );// copy 
    vector <int > y ( a +m + 1 , a + r +1);
    int i = 0 ; int j = 0 ;
    while ( i < x.size () && j < y.size() ){
        if ( x[i] <= y[j]){
            a[l] = x [i]; j++ ; i++;
        }
        else 
            a[l]= y[j] ; j ++; i++;
    }
    while ( i <x.size()){
        a[l]= x[i];j++ ; i++ ;
    }
    while ( j < y.size()){
        a[l] = y[j] ; j++ ;i++ ;
    }
}

void mergeSort( int a[], int l ,int r){
    if ( l >= r) return ;
    int  m = (l + r)/2 ;
    mergeSort(  a, l, m );
    mergeSort(  a, m+1, l);
    merge(a,l,m,r);
}



int main (){
    int n =10  ;
    int a[10];
    srand (time(NULL));
    for ( int i = 0 ; i < n ;i++){
        a[i]= rand()% 50; 
    }
    mergeSort( a, 0 , n -1);
    for (int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    return 0 ;
}