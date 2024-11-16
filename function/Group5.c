#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <string.h>// them ki tu \0 null sau cung 
// scanf ("%^\n", string)
int  checkPasswordQuality ( char c[]  ){
     int strength = 0  ;
    int leng = strlen(c);
    int lengcharacter = 0 ;
    int lowercharacter = 0 ;
    int uppercharacter = 0 ;
    int digitcharacter = 0 ;
    int specialcharacter = 0 ;
    if ( leng >=8) lengcharacter = 1 ;
    for ( int i = 0; i < leng ; i ++ ){
        if ( isupper(c[i])){
            uppercharacter = 1;
        }
        else if (islower(c[i]))
        {
            lowercharacter =1 ;
        }
        else if ( isdigit ( c[i])){
            digitcharacter = 1 ;
        }
        else specialcharacter = 1 ;
        
    }
    if ( uppercharacter){
        strength ++ ;
    }
    if ( lengcharacter){
        strength ++ ;
    }
    if ( lowercharacter){
        strength ++;
    }
    if ( digitcharacter){
        strength ++; 
    }
    if ( specialcharacter){
        strength++;
    }
    return strength ;
}
int main (){
    char password[100];
    printf("Enter your password: ");
    scanf("%s", password);

    int strength = checkPasswordQuality(password);
    printf("Password strength: %d\n", strength);

    
    
     
    
    return 0 ;
}