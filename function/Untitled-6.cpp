#include <bits/stdc++.h>
using namespace std ;
inline long long ucll ( int  a , int b ){
    int gcd ;
    for ( int i = 1 ; i <= a || i <=b ; i ++){
        if ( a % i == 0 && b % i == 0)
            gcd = i ;
    }
        return gcd ;
}
// sort ( a, a+ n) // xap xep theo thu tu ;sort (a, a+n,greater<int>())(theo chieu giam giam dan)
// struct ten_struct { member};
/*struct sinhvien{
    string msv ;
    string ten ;
    double gpa ;
    string dc ;

void in() {
 cout <<msv << " " << ten << " "<< fixed<< setprecision(2)<<  gpa <<" "<< dc << endl ;
}
};*/
/*struct sophuc{
int a , b ;
// kieu_tra_ve operator (+, -, ...)(danh sach tham so ){//}
sophuc operator + ( const sophuc other ){
    sophuc tong ;
    tong.a = a + other.a ;
    tong.b = b + other.b;
    return tong ;}
//insertion >>
friend istream& operator >>(istream& in ,  sophuc &x ){
    in >> x.a>> " ">> x.b ;
    return in ;
}//extraction << ;
friend ostream& operator << ( ostream& out , sophuc x ){
    out << x.a << " "<< x.b ;
    return out ;
}
friend bool operator == ( const sophuc x , const sophuc y ){
    return x.a == y.b && x.b == y.b;
}
};*/
/*struct phanso {
    long long  tu , mau ;

    void nhap ( phanso & p){
        cin >> p.tu >> p.mau ;
    }
    void rutgon ( phanso&p){
        long long  l = ucll( p.tu , p.mau);
        p.tu /= l;
        p.mau /= l ;
    }
    void in(phanso & p){
        cout << p.tu <<" "<<p.mau << endl ; 
    }
    phanso tong (phanso a , phanso b ){
        long long mc = lcm( a.mau ,b.mau);
        a.tu = mc / a.mau * a.tu ;
        b.tu = mc /b.mau * b.tu ;
        a.tu += b.tu ;
        a.mau  = mc ;
        rutgon ( a) ;
        return a ;
    }

*/
/*struct Point  {
    long long x ,y ;
    void nhap (  Point  & a){
        cin >>a.x>> a.y;
    }
    double   distance( Point a , Point b ) {
         return   sqrt (pow(a.x - b.x,2 ) + pow ( a.y - b.y ,2) );

    }

};*/
bool check (string s ){
if ( s.size() < 2 ){
    return false ;
}
string t = s ;
reverse ( s.begin() , s.end());
return t == s ;
}
bool cmp( pair< string , int> a , pair < string , int > b ){
     return ( a.first. size () != b.first.size() ? a.first.size () > b.first.size() : a > b );
}

main (){
    map < string , int > mp ;
    string s ;
    while ( cin >> s){
        if ( check (s)){
            mp[s] ++         ;
        }
        }
        vector < pair < string , int >> v ;
        for ( auto & it : mp){
            v.push_back ( it );
        }
        sort ( v.begin() , v.end () , cmp );
        for ( auto it : v){
            cout << it.first<<" "<< it.second<< endl ;
        }

    
 
 return 0;
}