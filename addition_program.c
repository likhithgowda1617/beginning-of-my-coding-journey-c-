#include<stdio.h>
int main(void){
    int a,b,sum;
    printf("enter two numbers:\n");
    if(scanf("%d%d",&a,&b)!=2){
        printf("invalid input\n");
    }
    else{
        printf("%d is the sum of two numbers",sum=a+b);
    }


}
