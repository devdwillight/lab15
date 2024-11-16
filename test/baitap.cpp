#include<bits/stdc++.h>
#include<set>
#include<map>
#define ll = long long ;
using namespace std ;
int main (){
    /*int t ; cin >> t ;
    while(t--){
        int  n , m ; cin >> n>> m;
        int a[n];
        for ( auto & x : a){cin>> x ;}
        set<int >se ;
        for ( int  i = 0 ; i< m ; i++ ){
            int x ; cin >> x ;
            se. insert(x);
        }
        bool ok = false ;
        for ( auto x :a){
            if( se.find(x)==se.end()){
                cout<< x <<endl;
                ok = true ;
            }
        }
        if (!ok){
            cout << " not found ";
        }
        else cout << endl;


    }*/
    //ios :: sync_with_stdio(false);
    //cin.tie(nullptr);// tang toc do doc lenh .
    int t ; cin >> t;
    cin.ignore();
    while ( t--){
        map < string , int > se;
        string username;
        getline( cin , username);
        if (se.find( username) == se.end()){
            cout << username <<endl;
        }
        else{ 
        cout << username << se[username]; 
    }
        se[username]++;
    }
    

    return 0;
}
//kiem tra ve,danh sach tham so
//thu tu va kieu du lieu cua danh sach tham so laf quan trog
//muon thay doi gia tricua doi so sau khi ham ket thuc=>truyen tham chieu 


