#include <bits/stdc++.h>
#include<set>
using namespace std ;
int main(){
//0 log(n)
//insert
//multiset<> ( cho mang co n phan tu so nguyen k, doi voi moi day con lien tiep co chieu k )
// in ra duoc phan tu lonw nhat trong day so do
// 10 4
int n , k ; cin >> n >> k ;
vector< int > v ;
for( int i = 0 ; i< n; i++){
     int x ; cin >> x ; 
     v.push_back(x);
}
multiset<int> s;
for( int i = 0 ; i < k ;  i++){
    s.insert(v[i]);
}
for( int  i = k ; i< n ; i++){
 cout << *s.rbegin()<<" ";
 s.erase(s.find(v[i-k]));
 s.insert(v[i]);
}
cout<< *s.rbegin();
/*s.insert(100);
s.insert(200);
s.insert(100);
s.insert(200);
s.erase(100);// xoa ca 2 thang 100
cout<<s.size()<<endl;
for(auto x : s){
 cout << x <<endl;
    }*/
 return 0;
}
/*
for each su dung bien gia tri cho moi lan lap vi the them &( tham chieu thang toi vung nho)
toan tu gan ( = ) assignment operator
1 1 1 2 3 4 5 8 9 10
*/