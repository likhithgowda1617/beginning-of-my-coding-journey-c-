//Using Recursive function
#include<stdio.h>
int fact(int);
int main(){
    int n;
    printf("enter the number to find its factorial");
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,fact(n));
    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int factnm1=fact(n-1);
    int fact=factnm1*n;
    return fact;
}

//logic is similar to the program which we done in sum_n_natnum.c
