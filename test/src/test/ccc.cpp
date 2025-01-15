#include<iostream>
#include<cmath>
//khai bao nguyen mau ham
bool check(int);
bool nt(int);
//
using namespace std;
bool ntup(int n){
    for(int i =2;i<=sqrt(n);i++){
        if(n%i==0)
    return false;
    }
    return n>1;                  // dam bao rang so minh nhap vao phai lon hon 1 . 
}
bool nt(int n){
int dem =0;//dem so nguyen to
for(int i =1;i<=n;i++){
    if(n%i==0){
        dem++;
    }
}
    if(dem==2){
        return true;
    }
    else{
        return false;
    }
}
bool check(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
        }
        if(ntup(sum)==true)
            return true;
        
        else
            return false;   
}
int main(){
int n;
cin>>n;
        if(check(n)){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
    return 0;
}