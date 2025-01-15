#include <bits/stdc++.h>
using namespace std ;
class sophuc{
    private :
    int thuc , ao ;
    public : 
    friend istream& operator >> ( istream &in, sophuc& a);
    friend ostream &operator << ( ostream&out, sophuc a );
    /*friend sophuc operator + ( sophuc a , sophuc b);*/ sophuc operator +(sophuc another);
    /*friend sophuc operator -( sophuc a , sophuc b);*/ sophuc operator - ( sophuc another );

};
istream& operator >> ( istream &in, sophuc& a){
    in >> a.thuc >> a.ao;
    return in ;
}
ostream &operator << ( ostream&out, sophuc a ){
    out << a.thuc <<" "<< a.ao <<endl;
    return out ;
}
 sophuc sophuc :: operator +(sophuc another){
    sophuc tong ;
    tong.thuc = this->thuc +  another.thuc;
    tong.ao = this-> ao + another .ao;
    return tong ;  
}

int main (){
    sophuc x , y ;
    cin >> x >> y ;
    sophuc tong = x + y ;
    cout << tong ;
    return 0;
}