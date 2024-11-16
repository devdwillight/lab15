#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//.3lf
void tinhtoan(int numbers[], int length){
    int sum = 0;
for ( int i = 0 ; i < length ;i++){
    if ( numbers[i] % 2 == 0){
        sum+=numbers[i];
    }
}
printf("%d", sum);
}
void bai1(){
    int numbers[100];
int length =  6 ;
for ( int i = 0; i < length ; i ++){
scanf("%d", &numbers[i]);
}

tinhtoan(numbers, length);
}
int check(int number[], int length){
    int temp[100];
     int tempLength = 0;
    for ( int i = 0 ; i < length;i++){
        if ( abs(number[i]) % 2 != 0){
             temp[tempLength] = number[i];
            tempLength++;
        }
    }
    for(int i = 0 ; i < tempLength; i++){
        printf("%d ", temp[i]);
    }
}
void bai2(){
    int numbers [100];
    int n ;
    scanf("%d", &n);
    for (   int i = 0 ; i < n ;i++){
    scanf("%d", &numbers[i]);
    } 
    check(numbers, n);
}

int main (){
   int n ; 
   scanf("%d", &n);
   for ( int i = 0; i < n ; i++){
    int sum =1 ;
    for ( int j = 0; j < i+1 ;j++){
        printf("%d ", sum);
        sum++ ;
    }
    printf("\n");
   }
    return 0 ;
}