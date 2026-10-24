#include <stdio.h>
#include <math.h>
void main(){
    int a;
    printf("enter a no:\n");
    scanf("%d",&a);
    
    printf("%d\n",a%2==0);
    if (a%2==0){
        printf("no is even\n");
    }
    else{
        printf("no is odd\n");
    }
}