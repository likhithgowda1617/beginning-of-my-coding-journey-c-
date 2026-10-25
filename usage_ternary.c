//ternary opertaor
//syntax:
//condition?do something if True:do something if False;
//example
#include <stdio.h>
int main(){
    int age;
    printf("enter age:");
    scanf("%d",&age);
    
    age>=18? printf("adult\n"): printf("not adult\n");
    return 0;
}