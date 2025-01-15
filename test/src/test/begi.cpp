#include <bits/stdc++.h>
using namespace std ;
#define ll long long  ;
int main (){
  int n , k ; 
  cin >> n >> k;
  vector<int >value(n);
  for ( int i = 0 ; i < n ;i ++){
    cin >> value[i] ;
  }
  map< int , pair < int ,int >> valueof ;
  for ( int i = 0 ;i < n ;i ++){
    for ( int j = i + 1 ; j < n ; j++){
      if (valueof.count ( k - value[i] - value [j])){
        cout <<  i + 1<<" "<< j + 1<<" "<< valueof[ k - value[i] - value [j]].first + 1 << " "<<
        valueof[ k - value[i] - value [j]].second + 1 ; return 0 ;
      }
    }
      for (int j = 0 ; j < i ; j ++){
        valueof[ value [i] + value [j]] = { i ,j };
      }
  }
  cout << " impossiable "<< endl ;
  return 0 ;
}