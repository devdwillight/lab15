#include <bits/stdc++.h>
using namespace std ;
struct sv{
string ma , ten , lop, ns ;
double gpa ;
void in(){
    cout << "  ma sinh vien : "<< ma << endl;
    cout << " ten sinh vien : "<< ten << endl;
    cout << " lop:"<< lop << endl;
    cout << " ngay sinh :"<< ns << endl;
    cout << "GPA :"<< fixed << setprecision(2)<< gpa<< endl ;
    cout << "-------------------------------"<<endl ;
}
void nhap(){
    cout << " nhap ma sinh vien :"; cin >> ma ;
    cout <<" ho va ten :" ; cin.ignore(); getline(cin, ten );
    cout <<" lop:"; cin >> lop ;
    cout << " ngay sinh"; cin >> ns ;
    cout << " nhap GPA :";cin >> gpa ;
cout <<"-------------------------------------"<<endl;
}
};
void inds ( sv a[] , int n){
    cout << " thong tin danh sach nhan vien :";
    for (int i= 0 ; i < n ; i++){
        a[i].in();    
        }
}
void tksv(sv a[], int n){
string ma ;
cout << " nhap ma sinh vien can tim :"; cin >>  ma;
bool found = false ;
for ( int i = 0 ;i < n ; i++){
    if (a[i].ma.find(ma) != string ::npos  ){
         a[i].in(); 
         found = true ;
    }
}
if ( !found)   
     cout << " khong tim thay" << endl ;
}
void kt ( sv a[], int n ){
    double res =0 ;
     for ( int i = 0 ;i < n ; i ++){
        if ( a[i].gpa > res ) res = a[i].gpa ;
     }
     for ( int i = 0 ;i < n ; i ++){
        if ( res == a[i].gpa )
            cout << " danh sach co thi sinh gpa cao nhat la :"<<endl;
            a[i].in();
     }
}
bool mp1 ( sv a , sv b){
            return a.gpa > b.gpa ;// giam dan ( neu < la tang dan)
}
void ktgpa ( sv a[], int n){
    vector<sv>v;
    for(int i = 0 ; i < n ;i ++){
        if ( a[i].gpa >= 2.5) v.push_back(a[i]);
    } 
    sort ( v.begin(), v.end(),mp1);
cout << " danh sach sinh vien co gpa >= 2.5"<<endl;
    for ( sv x : v){
        x.in();
    }

}
int main (){
int n ; cin >> n;
sv a[n];
for ( int i  =0 ;i < n ;i ++){
    a[i].nhap();
}

return 0 ;    
}