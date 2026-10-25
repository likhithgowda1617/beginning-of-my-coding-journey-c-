#include <stdio.h>
int main(void){
    char ch;
    printf("enter a single character to check whether it is uppercase or not:");
    if(scanf("%c",&ch)!=1){
        printf("invalid input\n");
    }
    else{
        if(ch>='A' && ch<='Z'){
            printf("%c is a uppercase character\n",ch);
        }
        else if(ch>='a' && ch<='z'){
            printf("%c is a lowercase character\n",ch);
        }
        else{
            printf("the given input is not a character\n");
        }
    }
}