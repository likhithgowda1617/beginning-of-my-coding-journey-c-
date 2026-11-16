//using library functions ,calculate square of a number
#include<stdio.h>
#include<math.h>
int square1(int n);
int cube1(int n);
int main(){
    int n,c;
    printf("Enter 1.to find square\n 2.to find cube:");
    scanf("%d",&c);
    switch(c){
        case 1:
            printf("enter the number to find its square:");
            scanf("%d",&n);
            int result=square1(n);
            printf("the square of the %d is %d\n",n,result);
            break;
        case 2:
            printf("enter the number to find its cube:");
            scanf("%d",&n);
            printf("the cube of the %d is %d",n,cube1(n));
            break;
        
        }
    }
int square1(int n){
    return pow(n,2);
}
int cube1(int n){
    return pow(n,3);
}