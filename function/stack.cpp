#include <bits/stdc++.h>
#include <stack>
// LIFO : last in first out 
// push : đẩy phần tử vào trong ngăn xếp
// pop : lấy phần tử ra khỏi ngăn xếp 
// top : lấy ra pt để 
// size 
// empty 
using namespace std ;
 int main (){
    int n ; cin >> n;
    int a[n] ;
    stack <int >st ;
    for ( int &x : a) cin >> x ;
    int res = INT_MIN ; 
    int i = 0 ;
    while ( i < n){
        if ( st.empty() || a[i] >= a[st.top()]){
            st.push(i);
            i++ ;
        }
        else {
            int indx = st.top();
            st.pop();
            if (st.empty()){
                res = max ( res,a[indx] * i );
            }
            else {
                res= max( res , a[indx] *( i - st.top() -1 ));
            }
        }
    }
    while(!st.empty()){
        if ( st.empty() || a[i] >= a[st.top()]){
            st.push(i);
            i++ ;
        }
        else {
            int indx = st.top();
            st.pop();
            if (st.empty()){
                res = max ( res,a[indx] * i );
            }
            else {
                res= max( res , a[indx] *( i - st.top() -1 ));
            }
    }
    }
    cout << res ;
    return 0 ;
 }