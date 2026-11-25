#include<stdio.h>
void swap(int *n,int *m);

int main(){
    int n,m;
    printf("enter the two numbers to swap them:");
    scanf("%d%d",&n,&m);
    printf("before swapping the numbers are:%d and %d\n",n,m);
    swap(&n,&m);
    printf("first number is %d\n",n);
    printf("second number is :%d",m);
    return 0;

}

void swap(int *n,int *m){
    int a;
    a=*n;
    *n=*m;
    *m=a;
    printf("after swapping the numbers are:%d & %d\n",*n,*m);
}