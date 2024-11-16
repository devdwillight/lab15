#include <iostream>
using namespace std ;
bool check(long long n){
  if(n==0||n==1){
    cout<< "yes";
  }
  else{
  long long fn1=0,fn2=1;
 for(int i =2;i<=92;i++){
long long fn =fn1+fn2;
if(fn==n){
  return true;
}
else return false ;
  }
  }
}
int main()
{
  long long n;
  cin>>n;
  check(n);
  if (check(n)==true){
    cout<<"yes";
  }
else{
  cout<<"no";
}
    return 0;
}
/*
toan tu gan ( = ) assignment operator

*/