char *chuyen ( char *c){
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

void Convert (){
    char number[100];
    scanf("%c", &number);
    int length = strlen(number);
char* res = (char*)malloc(100*sizeof(char));
for ( int i = 0 ; i < length ; i++ ){
    if ( number[i]=='8'){
        printf ("INVAILD !");
        break;
    }
    else{
strcpy(&res[i*3], chuyen(&number[i]));

printf ("%s", res);
}
}
free (res);
}

int main(){
Convert(); 
return 0 ;
}