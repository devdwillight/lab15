#include <stdio.h>
#include <stdlib.h>// malloc
#include<ctype.h>
#include<time.h>
// cap phat dong 
//int*ptr =(int*)malloc(10000000*sizeof(int));
// static mem.allocation - Dynamic mem.allocation
void swap( int *a , int *b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;

void  linearSearch (int*a, int search){
    int found = 0;
    for( int i = 0 ; i< 100; i++){
        if (a[i]== search){
            found = 1 ;
            printf("%d\n", i);
            break ;
        }
    }
    if ( !found){
        printf("NotFound!\n");
    }
}
void bubbleSort( int *a){
    for ( int i = 0 ; i < 99; i++){
        for ( int j = 0  ; j < 100 -i -1; j++){
            if ( a[j] >= a[j + 1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
    for ( int i = 0 ; i < 100 ; i++){
        printf(" %d", a[i]);
    }
    printf("\n");
}
void binarySearch(int a[], int search) {
    int left = 0;
    int right = 99;
    int mid = (left + right) / 2;
    int found = 0;
    if (search >= a[mid]) {
        for (int i = mid; i < 100; i++) {
            if (a[i] == search) {
                found = 1;
                printf("Found at position %d\n", i);
                break;
            }
        }
    } else {
        for (int i = 0; i < mid; i++) {
            if (a[i] == search) {
                found = 1;
                printf("Found at position %d\n", i);
                break;
            }
        }
    }
    if (!found) {
        printf("NOT found!\n");
    }
}

int main(){
    int a[100] ;
    srand(time(0));
    for ( int i = 0 ; i < 100 ; i++){
        int number = rand()%(50+1);
        a[i]= number ;
    }
    for ( int i = 0 ; i< 100 ;i++){
        printf(" %d", a[i]);
    }
    printf("\n");
    int search ;
    int find ;
    scanf("\n%d", &search);
    linearSearch(a, search);
    bubbleSort(a);
    scanf("%d", &find);
    binarySearch(a, find);
    return 0;
}