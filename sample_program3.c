#include <stdio.h>
int main(void){
   
    char ch;
    printf("enter the characters :\n");
    if(scanf("%c",&ch)!=1){
        printf("invalid input\n");
    }
    else{
        if (ch>='0' && ch<='9'){
        printf("character is a digit\n");
        }
        else{
            printf("character is not a digit\n");
    
        }
    }
}   