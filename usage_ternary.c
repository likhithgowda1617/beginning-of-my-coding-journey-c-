//ternary opertaor
//syntax:
//condition?do something if True:do something if False;
//example
#include <stdio.h>
int main(void){
    int age;
    printf("enter age:");
    if(scanf("%d",&age)!=1){
        printf("invalid input\n");
        return 1;
    }
    else{
        age>=18? printf("adult\n"): printf("not adult\n");
    }
    return 0;
}