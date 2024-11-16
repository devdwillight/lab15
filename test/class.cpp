#include <bits/stdc++.h>
using namespace std;
//class : lop 
// thuoc tinh : attribute
// hanh vi : behavior
// object : doi tuong 
  // constructor : khoi tao ham ( cung te voi class)
//- Encapsulation : dong goi
// destructor : ham huy 
// setter getter 
//-Access modifier
// + private 
// + public
// + protected 
// static 
//friend function, friend class 
// << >>
//cout  : ostream
//cin : istream 
class sinhvien;
class giaovien;


class sinhvien {
    friend class giaovien ;                  // chung class 
private :

    string id ,ten,ns ;
    double gpa ;
    static int dem ;                                    // dung chung cho class 
public :
    sinhvien(); // constructor 
    sinhvien ( string ,string ,string , double);      // consructor 
         friend istream & operator >>( istream & in , sinhvien &a);
         friend ostream & operator << ( ostream & out, sinhvien a ); 
         friend void chuanhoa(sinhvien&);     // ham friend 
          friend bool operator < ( sinhvien a, sinhvien b );  
    //double getgpa ();                                          /

};
bool operator < ( sinhvien a , sinhvien b){
    return a.gpa < b.gpa ;
}
istream & operator >> ( istream & in, sinhvien&a){
cout << " nhap ten :";  cin.ignore(); getline(in, a.ten);
cout <<" nhap ns : "; in >> a.ns ;
cout << " nhap gpa :"; in >> a.gpa ;
return in ;
}
ostream & operator << (ostream & out , sinhvien a){
    out << a.id << " "<< a.ten <<" "<< a.ns<<" "<< fixed<<setprecision(2)<<a.gpa<<endl;
    return out ;
}
void chuanhoa ( sinhvien &a){                 // khi nao thay doi gia tri thi phai dung tham chieu
    string res = "";
    stringstream ss ( a.ten);
    string token ;
    while ( ss >> token){
        res+= toupper ( token[0]);
        for ( int i = 1 ; i < token.length(); i ++){
            res += tolower ( token[i]);
        }
        res+= " ";
    }
    res.erase( res.length() - 1);
    a.ten = res ;
}
/*int sinhvien :: getdem(){
    return dem ;
}*/
 /*void sinhvien:: tangdem (){
    dem ++ ;
 }*/
int sinhvien :: dem = 0 ; 
//implementation 
sinhvien :: sinhvien(){// khong co kieu tra ve 
//cout<<" ham khoi tao "<<endl ;
dem++;
this-> id = "SV" + string ( 3  - to_string(dem).length(), '0' ) + to_string(dem);
 this->ten=this->ns = "";
this->gpa = 0 ;
}
sinhvien :: sinhvien ( string id , string ten ,string ns ,double gpa){
   
    this -> id = id ;
    this -> ten = ten ;
    this -> ns = ns ;
    this -> gpa = gpa ;
}
 


void abc (){
    sinhvien x ;
}

 /*double sinhvien :: getgpa(){
    return this -> gpa ;
 }*/
 /*bool  cmp( sinhvien a , sinhvien b){
    return a.getgpa() > b.getgpa();             // giam dan 
 }*/
/* sinhvien :: ~sinhvien(){
    // cout << " doi tuong dc huy"<<endl ;
}*/
class giaovien{                                 // thay doi gpa 

    string khoa ;
    public :
    void update ( sinhvien&);
};
 void giaovien :: update( sinhvien&a){          
    a.gpa = 3.20;
 }
int main (){
    int n ; cin >> n;
    sinhvien a [n];
    for ( int i = 0 ; i < n ; i ++){
        cin >> a[i] ;
    }
    sort ( a , a + n);
    for ( sinhvien x : a ){
        cout << x ;
    }
    return 0;
}