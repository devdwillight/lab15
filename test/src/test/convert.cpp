#include <bits/stdc++.h>
#include <stack >
using namespace std ; // ki tu -> so ( - )
                      // so -> kitu (+)
                                                  // 10 sang 16
void dectohex ( long long dec , char kq[]){
int dem =0;
while ( dec > 0){
    int x = ( dec % 16) ;
    dec/= 16 ;
    if ( x < 10 ){
        kq[dem] = x + '0';   
    }
    else {
        kq[dem] = x - 10 +'A';}
    dem++ ;
}
strrev ( kq);
}

                                              // 10 sang 2
long long dectobina (long long dec){ 
    stack<int> st ;
    while ( dec > 0){
        st.push(dec%2);
        dec/= 2; 
    }
    while ( !st.empty()){
        cout << st.top();
        st.pop();
    }
}

                                                 // 10 sang 8
long long dectooctal (long long dec){
    long long octal = 0 ; 
    int dem = 0 ;
    while ( dec > 0){
        octal+= (dec%8) * pow ( 10, dem);
        dec/= 8; 
        dem++;
    }
    return octal ;
}
                                                  //8 sang 10
long long octaltodec (long long octal ){
    long long dec = 0;
    int dem = 0 ;
    while ( octal > 0){
        dec+= (octal % 10)*pow ( 8, dem );
        octal/= 10 ;
        dem++;
    }
    return dec ;
}
                                                 //  2 sang 10
 long long bintodec (long long bin ){
    long long dec = 0;
    int dem = 0 ;
    while ( bin > 0){
        dec+= (bin % 10)*pow ( 2, dem );
        bin/= 10 ;
        dem++;
    }
    return dec  ;}
                                                 // 16 sang 10
  void hextodec ( char kq[], int &n  ){
    strrev ( kq);
    n = 0;
    int leng = strlen(kq);
    for ( int i = 0;i < leng ; i ++){
        if ( kq[i]>='0' && kq[i]<= '9'){
            n += (kq[i] -'0')*pow ( 16,i);
        }
        else {
            n += (kq[i] + 10 -'A')*pow ( 16,i);
        }

    }
    
 }   
                                        // 2 sang 16 ;
char  nhap1 ( char a,char b , char c , char d ){
         int tong = 8 * ( a - '0') + 4 * ( b - '0') + 2 *(c - '0') + (d - '0');
         if ( tong < 10){
            return  tong + '0';
         }
         else 
         return tong - 10 + 'A' ; 

}
    string bintohex ( string &s  ){
        if (s.length() %4 != 0){
            s = string ( 4 - s.length() %4 , '0' ) + s ;
        }
        string res = "";
        for ( int i = 0 ; i < s.length(); i+=4){
            res = res + nhap1(s[i], s[i+1] , s[i+2], s[i+3]);
        }
        return res ;
          }
                                                                   // 2 sang 8 ;
    int  nhap2 ( char a , char b , char c ){
        return  4*(a-'0') + 2* (b- '0') + (c - '0');
    }
string  bintooctal( string &s ){

    if ( s.length () % 3 != 0){
        s= string ( 3 - s.length()%3 , '0')+ s ;
    }

    string res = "";
    for ( int i = 0 ; i < s.length () ; i+= 3){
        res += to_string (nhap2( s [i] , s[i+1] , s[i+2]));
    }
    return res ;
}
                                                                  // 8 sang 2
    string chuyen (char so){
        switch (so){
            case '0':
            return "000";
            case '1':
            return "001";
            case '2':
            return "010";
            case '3':
            return "011";
            case '4':
            return "100";
            case '5':
            return "101";
            case '6':
            return "110";
            case '7':
            return "111"; 
            default:                            
            return "";
        }
    }
    string octaltobin ( string &s){
        vector <char > v;
        char token ;
        string res="";
        stringstream ss (s);
        while ( ss >> token){
            v.push_back(token);
        }
        for ( char &x : v  ){
            res += chuyen(x) ;
        }
        return res ;
    }
                                                // 8 sang 16
       long long kiemtra (long long octal ){
    long long dec = 0;
    int dem = 0 ;
    while ( octal > 0){
        dec+= (octal % 10)*pow ( 8, dem );
        octal/= 10 ;
        dem++;
    }
    return dec ;
       }
       void octaltohex ( long long dec, char kq[]){
int dem =0;
while ( dec > 0){
    int x = ( dec % 16) ;
    dec/= 16 ;
    if ( x < 10 ){
        kq[dem] = x + '0';   
    }
    else {
        kq[dem] = x - 10 +'A';}
    dem++ ;
}
strrev ( kq);
       }

//
                                     // 16 sang 8
long long check ( char kq[], long long &n  ){
    strrev ( kq);
    n = 0;
    int leng = strlen(kq);
    for ( int i = 0;i < leng ; i ++){
        if ( kq[i]>='0' && kq[i]<= '9') {
        n += (kq[i] -'0')*pow ( 16,i);
        }
        
        else {
        n += (kq[i] + 10 -'A')*pow ( 16,i);  
        }    
    }  
    return n ;
 } 
 long long hextooctal (long long dec){
    long long octal = 0 ; 
    int dem = 0 ;
    while ( dec > 0){
        octal+= (dec%8) * pow ( 10, dem);
        dec/= 8; 
        dem++;
    }
        return octal ;
        }
                                       // 16 sang 2 
    long long   kiemtra1 ( char kq[], long long  &n  ){
    strrev ( kq);
    n = 0;
    int leng = strlen(kq);
    for ( int i = 0;i < leng ; i ++){
        if ( kq[i]>='0' && kq[i]<= '9'){
            n += (kq[i] -'0')*pow ( 16,i);
        }
        else {
            n += (kq[i] + 10 -'A')*pow ( 16,i);
        }
    }
    return n ;
 }   
 long long hextobin (long long dec){
    long long bin = 0 ; 
    int dem = 0 ;
    while ( dec > 0){
        bin+= (dec%2) * pow ( 10, dem);
        dec/= 2; 
        dem++;
    }
    return bin ;
}
int main (){
    cout << " danh sach dich vu ban muon chon :"<<endl ;
    cout <<"----------------------"<<endl;
    cout << "1.dec to hex "<<endl ;
    cout <<"2.dec to bin"<<endl ;
    cout << "3.dec to octal"<<endl ;
    cout <<"4.octal to dec"<<endl;
    cout <<"5.bin to dec"<<endl;
    cout << "6.hex to dec"<<endl;
    cout << "7.bin to hex"<<endl ;
    cout <<"8.bin to octal"<<endl ;
    cout << " 9.octal to bin"<<endl;
    cout << "10.octal to hex" <<endl;
    cout <<"11. hex to bin"<<endl ;
    cout << " 12.hex to ocatl"<<endl;
    cout <<"------------------------"<<endl;
    cout <<" nhap dich vu ban muon chon" <<endl;
int n ; cin >> n ;
if ( n == 1){
    char a[20];
    long long m ; cin >> m ;
    dectohex(m , a);
    for ( char &x :a){
        cout << x ;
    }
}
if ( n == 2 ){
    long long l ; cin >> l;
     dectobina(l);
}
if ( n ==3){
    long long j ; cin >> j;
    cout << dectooctal(j);
}
if ( n ==4){
    long long h ; cin >> h ;
    cout << octaltodec(h);
}
if ( n == 5){
    long long m ; cin >> m;
    cout << bintodec(m);

}
if ( n == 6){
    char a[20];
    cin >> a ;
    int m ;
    hextodec(a ,m);
    cout << m ;
}
if ( n== 7){
    string s ;
    cin >> s ;
    cout << bintohex(s);
}
if (n == 8){
    string s ; cin >>s ;
    cout << bintooctal(s);
}
if ( n == 9){
    string s ; cin >> s ;
    cout << octaltobin ( s);
}
if ( n == 10){
    long long  s ;
    cin >> s ;
    char a [20];
    octaltohex ( kiemtra (s), a);
    cout << a ;

}
if ( n == 11 ){
    char a [20];
    cin >> a ;
    long long  m ;
   cout << hextobin(kiemtra1 (a, m ));
}
if ( n == 12){
    char a [20];
    cin >> a ;
    long long m ;
    cout << hextooctal(check ( a, m)); 

}
    return 0 ;
}
                  