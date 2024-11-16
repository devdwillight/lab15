#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>

int choice (){
    int n ;
    printf("nhap dich vi ban muon :");
    scanf("%d", &n);
    return n ;

}

int Operation(int kilomet){
    int totalCost = 0 ;
    if ( kilomet <= 5){
        totalCost = 100 ;
    }
    if ( kilomet > 5 && kilomet <= 15){
        totalCost = 100 + ((  kilomet - 5)*10); 
    }
    if ( kilomet > 15 && kilomet <=25){
        totalCost = 100 + 100 +((kilomet - 15)*8);
    }
    if ( kilomet > 25){
        totalCost = 100 + 100  + 80 + (( kilomet -25)*5);
    }
    return totalCost ;

} 

void CalculationTaxiBill(){
    int kilomet ;
printf("nhap so kilomet : ");
scanf("%d", &kilomet );
 double totalCost  = Operation(kilomet);
 if ( totalCost > 200){
    totalCost = (totalCost - ( (totalCost / 100)*10));
 }
 printf("%.3lf", totalCost);

}
char *chuyen ( char *c){
    if (*c == '8') {
        printf("INVALID!");
        exit(0); // Dừng toàn bộ chương trình
    }
    switch (*c)
    {
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

char *Convert (char number[]){
    int length = strlen(number);
char* res = (char*)malloc(100*sizeof(char));
for ( int i = 0 ; i < length ; i++ ){ 
strcpy(&res[i*3], chuyen(&number[i]));
    }
return res;

free (res);
}
void octaltoBinary (){
    char number[100];
    scanf("%s", &number);

    printf("%s",Convert(number));
}

int Quality (char password[] ) {
    int character = 0 ;
    int uppercase = 0 ;
    int lowercase =0 ;
    int digit = 0 ;
    int special  = 0;

    int length = strlen(password);
    if ( length >= 8){
        character = 1 ;
    }
    for ( int i = 0 ; i < length ; i++ ){
        if ( isupper(password[i])){
            uppercase = 1 ;
        }
        else if(islower(password[i])){
            lowercase =1 ;
        }
        else if(isdigit(password[i])) {
            digit =1 ;
        }
        else special = 1 ;
    }
    int qualityofpassword = 0;
    if ( character) qualityofpassword++;
    if ( uppercase) qualityofpassword ++ ;
    if ( lowercase) qualityofpassword ++;
    if (digit) qualityofpassword ++;
    if ( special) qualityofpassword++ ;

    return qualityofpassword;
}
void checkPassword(){
    char password[100];
    printf ("nhap password :");
    scanf ("%s", &password );
    int  pwQuality1 =Quality(password);
    printf ("%d\n", pwQuality1);
}
int main(){
   int choiceOption ;
   do {
    choiceOption = choice();
    switch (choiceOption)
    {
    case 1 : CalculationTaxiBill();break ;
    case 2 : octaltoBinary(); break;
    case 3 : checkPassword(); break ;
    default : printf ("BYE\n");
    }

   }
   while ( choiceOption < 1 && choiceOption > 3);
   fflush ( stdin);
  
return 0 ;
}