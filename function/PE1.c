#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <string.h>
#include<math.h>
int GCD ( int a ,int b){
    int temp = 0;
    for ( int i = 1 ; i <= a|| i <=b ;i++){
        if ( a % i == 0 && b % i == 0){
            temp = i ;
        }
    }
    return temp ;
} 
int LCM ( int a , int b){
    int res = 0 ;
    res = ((a/GCD(a,b))*b);
    return res ;
}
void swap ( char *a, char *b ){ 
    int temp = *b;
    *b =*a;
    *a = temp ;
}
int checkPrime(int n){
    if (n <= 1){
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }

    return 1;
}

void isPrime(){
    int numbers[100];
    int leng;
    scanf("%d", &leng);

    for (int i = 0; i < leng; i++){
        scanf("%d", &numbers[i]);
    }

    int count = 0;
    for (int i = 0; i < leng; i++){
        if (checkPrime(numbers[i]) == 1){
            count++;
        }
    }

    printf("%d\n", count);
}
void reverse ( char *number){
    int leng = strlen(number);
    int l = 0 ; int r = leng - 1; 
        while ( l < r ){
            swap(&number[l], &number[r]);
        l++;
        r--;
        }
        printf("%s", number);

    }
void done (){
    char number[100];
    scanf("%s", &number);
    reverse(number);
    }
void UCLLnBCNN (){
    int a, b ;
    printf("nhap a va b :");
    scanf("%d%d", &a,&b);
    int ucll = GCD(a,b); int bcnn = LCM(a,b) ;
    printf("%d %d\n", ucll, bcnn);
}

int main (){
 isPrime();
    return 0 ;
}