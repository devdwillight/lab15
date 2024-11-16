#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
int choice (){
    int n ;
    printf("1 :Cylinder_volume_calculation\n");
    printf("2 : Construction_cost_estimation\n");
    printf("3  :Character_statistic");
    printf("choice service :");
    scanf("%d", &n);
    return n ;

}

const double PI = 3.1415926 ;
double Cylinder( int h , int r  )
{
     double A = (2*PI*r) ;
    double V = A * h ;
    return V ;

} 
int Cylinder_volume_calculation  (){
    int h , r ;
    printf("the height of the cylinder :");
    scanf("%d", &h);
    printf("area of the cylinder base :");
    scanf("%d", &r);
    double result = Cylinder(h ,r);
    printf("%.2lf",  result);

}
double Operation ( int area){
    if ( area <= 0){
        printf ("-1");
        exit(0);
    }
    double cost = 0 ;
    if ( area < 70 ) cost = (area * 5) ; 
    if ( area > 70 && area <= 150){
        cost = (70 * 5) + (( area - 70)*5)-((area-70)/2);
    }
    if ( area > 150){
        cost = (70 * 5) + ((80*5)-40) + ((area - 150)* 4);
    }
    return cost ;
}

int 	Construction_cost_estimation  (){
    int area ;
    printf("type an area :");
    scanf("%d", &area);

     double costEstimation =Operation(area);
printf("Cost estimation = ");
printf ("%.1lf ", costEstimation); printf ( "million VND");
}

char Sentence ( char string []){
char temp [100];
int leng = strlen ( string);
for ( int i = 0 ; i  < leng ; i ++){
   for ( int j = 1 ; j < leng ; j++){
    if ( string[i]!=string[j] && string[i]!=' '&& string[j]!=' '){
        printf("%c ", string [j]);
    }
   }
}

}
void 	Character_statistic  (){
    char string[100];
    scanf("%[^\n]", &string);
    Sentence(string);
}


int main (){
 int choiceOption ;
   do {
    choiceOption = choice();
    switch (choiceOption)
    {
    case 1 :Cylinder_volume_calculation() ;break ;
    case 2 : Construction_cost_estimation  (); break;
    case 3 :Character_statistic(); break ;
    default : printf ("BYE\n");
    }

   }
   while ( choiceOption < 1 && choiceOption > 3);
   fflush ( stdin);
  
return 0 ;
}