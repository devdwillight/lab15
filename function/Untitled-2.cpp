#include<bits/stdc++.h>
#include <map>
using namespace std;
int main (){
    int t ; cin >> t ;
    while ( t--){
        int n ; cin >> n;
        int a[n];
        for ( int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        vector<int > v(a,a+n);// truyen cac phan tu vao vector
        sort ( v.begin(), v.end());
        for ( int i = 0 ;i < n ; i ++ ){
            auto  it = upper_bound(v.begin() , v.end(), a[i]);
            if ( it ==v.end()){
                cout << "_";
            }
            else 
            cout << *it << " ";
        }
        cout << endl ;

    }
 return 0;
}
    /*int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int a [n];
        for(int i = 0 ; i < n ; i ++){
            cin >>a[i];
        }
        int min_val = a[0], res = INT_MIN;
        for ( int i = 1 ; i < n; i++){
            if ( a[i]>min_val){
                res = max(res , a[i] - min_val);
                cout << res <<endl;
            }
            min_val = min ( a[i] , min_val);
        }
        if ( res == INT_MIN){
            cout << "-1";
        }
}
return 0 ;
}
/*int f[1001];
void check(){
int fibo[20];
 fibo[0]=0, fibo[1] = 1;
 for(int i =2; i <=19 ; i++){
    fibo[i] = fibo[i-1]+fibo[i-2];
 }
 for ( int i = 0 ;fibo[i]< 1000; i++){
f[fibo[i]] =1 ;
 }

}
int main(){
int t ; cin >> t ;
while ( t--){
    int n ; cin >> n;
    int a[n];
    for ( int i =0 ; i < n ; i++){
        cin >> a[i];
    }
    check();
    for ( int i = 0 ; i < n ; i++){
        if( f[a[i]] == 1){
            cout << a[i]<<" ";
        }
    }
    cout <<endl ;
}
    return 0 ;
}
    // 0 (nlog(n))
    /*
    while ( t --){
        int n ; cin >> n;
        int a[n];
        // sort ( a, a+ n) // xap xep theo thu tu ;sort (a, a+n,greater<int>())(theo chieu giam giam dan)
        for(int i=0 ; i < n;i++){
             cin >> a[i] ;
        }
        sort(a,a+n);
        int res =INT_MAX ;      // INT_MAX = 2147483648 
    // INT_MIN  = -2147484648 integer limit;
    for ( int i = 1 ; i < n ; i++){
        res = min ( res , a [i] - a[i-1]);
    }
    cout <<res <<endl ;
    } */
    //const  int MOD = 1000000007; 

  
