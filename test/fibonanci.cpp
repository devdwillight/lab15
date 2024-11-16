#include <bits/stdc++.h>
using namespace std ;
bool check (){
  int n , k , t ; cin >> n >> k >> t ;
   multiset <int>se ;
   int a [n];
   for ( int i = 0 ; i < n ; i ++) cin >> a[i];
   for ( int j = 0 ; j < k; j++){
    auto it = se.lower_bound(a[j] -t);
    if( it != se.end() && *it<=a[j] +t ) return true ;
    se.insert(a[j]);
   } 
   int inx = 0;
   for ( int j = k ; j < n ; j++){
    se.erase(se.find(a[j -k]));
    auto it = se.lower_bound(a[j] -t);
    if ( it != se.end() && *it <= a[j] + t)
      return true ;
    se.insert(a[j]);
   }
   return false ;
  }
int main (){
  int t ; cin >> t;
  while ( t--){
    if ( check()){
      cout << " yes"<< " ";
    }
    else cout << " no";
  }

  return 0;
}
