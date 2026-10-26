#include <stdio.h>
int main(void){
    int n,i;
    int fact;
    printf("enter the no to find its factorial");
    scanf("%d",&n);
    if(n<0){
        printf("only positive integers are allowed");
        
    }
    else if(n==0||n==1){
        printf("factorial is %d",1);
        
    }
    else{
        fact=n;
        for(i=n-1;i>=1;i--){
            fact=fact*i;
        }
        printf(" the factorial of %d is %d",n,fact);
    }
}
