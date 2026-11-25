#include<stdio.h>
void mathwork(int a,int b,int *sum,int *prod,int *avg);

int main(){
    int a,b,sum,prod,avg;
    printf("enter the value of two numbers");
    scanf("%d%d",&a,&b);
    mathwork(a,b,&sum,&prod,&avg);
    printf("\nsum=%d\nproduct=%d\navg=%d",sum,prod,avg);
    return 0;
}

void mathwork(int a,int b,int *sum,int *prod,int *avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;

}