// example of call by reference

#include<stdio.h>
void sq(int n);
void _sq(int *n);
int main(){
    int num;
    printf("enter the value of num:");
    scanf("%d",&num);
    
    sq(num);
    printf("\nnum=%d\n",num);

    _sq(&num);
    printf("number=%d\n",num);
    return 0;
}
void sq(int n){
    n=n*n;
    printf("sq of number:%d\n",n);
         
}

void _sq(int *n){
    *n=(*n)*(*n);
    printf("sq of number:%d\n",*n);
}