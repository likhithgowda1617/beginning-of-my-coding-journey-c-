#include <stdio.h>
int main(void){
   
    char ch;
    printf("enter the characters (any letters or in numbers only no 1):\n");
    if(scanf("%c",&ch)!=1){
        printf("invalid input\n");
    }
      
    if (ch>='0' && ch<='9'){
        printf("character is a digit\n");
    }
   else{
     printf("character is not a digit\n");
   }
}