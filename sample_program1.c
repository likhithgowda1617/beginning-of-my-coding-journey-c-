#include <stdio.h>
#include <math.h>

int main(void){
    int a;
    printf("enter a no:\n");
    if(scanf("%d",&a)!=1){
        printf("invalid input\n");
        return 1;
    }
    else{
        printf("%d\n",a%2==0);
        if (a%2==0){
            printf("no is even\n");
        }
        else{
            printf("no is odd\n");
        }
    }
}