#include <bits/stdc++.h>
using namespace std ;
class sinhvien{
    private :
    string ten , lop , ma , email ;
    public : 
    sinhvien(){
        ten = lop = ma = email = "";
    }
    friend istream & operator >> ( istream &in  , sinhvien &a) ;
    friend ostream & operator << ( ostream &out  , sinhvien a );
     string getMa(){
        return this-> ma ;
     }

};


     istream & operator >> ( istream & in , sinhvien &a){
        in >> a.ma ;
        cin.ignore();
        getline ( in , a.ten );
        in >> a.lop ; in >>a.email ; return in ;
    }
ostream & operator << ( ostream & out ,sinhvien a ){
    out << a.ma << a.lop << a.ten << a.email <<endl ;
    return out ;
}

void viethoa ( string s){
    for ( char &x : s ) x = toupper(x);
}
string kiemtra ( string s ){  // tach 2 ki tu dau roi in hoa 
    string token = ""  ;
    string res = "";
    vector <string > v ;
    stringstream ss (s);
    while ( ss >> token){
         v.push_back(token);
    }
    for ( int i = 0  ; i < 2 ; i ++){
        res += toupper(v[i][0]);
    }
    return res ;
    }
int main (){
    int n ; cin >> n ;
    map< string , vector < sinhvien  >> mp;
for ( int i = 0 ; i < n ; i ++ ){
    string tmp ; cin >> tmp ;
    mp[tmp.getMa( ).88888substr(5,2)].push_back ( tmp);
}
string s ; cin >> s ;
viethoa(s);
cout <<" danh sach sinh vien :" << s <<endl ;
string ng = kiemtra (s);
if ( ng == "CN" || ng == " AT"){
    for ( sinhvien x : mp[ng]){
        if ( x.getMa().find ( "E") != string :: npos) cout << x ;
    }
}
else for ( sinhvien x : mp[ng]){
    cout << x ;
}
 // kiem tra key ( value)
    


    return 0;
}