#include<bits/stdc++.h>
#include<map>
using namespace std ;
// find o log(n)
// erase
//count
/* pair<datatype1,datatype2>v;
   key                value     */
// map <datatype 1, datatype 2>mp;
int main(){
    /*tuple<string,int,int > t{ "dd",2,3};
    cout<<get<0>(t)<<get<1>(t);
    pair<int ,int>v = {100,200};
    cout<< v.first<<" "<<v.second<<endl;*/
 map< string , int > mp;
 int n ; cin>> n ;
 for( int i = 0; i < n ; i++){
    string s ; cin>> s; 
    mp[s]++;
 } 
 int max_fre = 0 ;
  string res ; 
for( auto i : mp){
    cout<<i.first<<" "<< i.second << endl; 
    if(i.second >= max_fre ){
        max_fre = i.second ;
        res = i.first ;
        } 
}
        cout<< res<< " "<<max_fre<<endl;
    multimap<int , int > v ;// cho phep trung key
    v.insert({1,100});
    v.insert({2,200});
    v.insert({1,300});
    for(auto i : v){
        cout<< i.first<<" "<< i.second<<endl;
    }


/*mp[100]= 200;// (key, value)
mp[200]= 300;
for(pair<int, int > x : mp){
    cout << x.first<< " "<<x.second<<endl; 
}
for (auto it : mp){
    cout << it.first << it.second<<endl;
}
if ( mp.find (100) != mp.end()){
    cout<< " found ";
}
else 
cout << " not found ";
mp.erase(100);
for ( auto x : mp ){
    cout<< x.first<<" "<<x.second<<endl;

}*/
 return 0;
}

