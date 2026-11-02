#include <stdio.h>
int main(void){
    int a,b,c,min;
    printf("enter three numbers:\n");
    if(scanf("%d%d%d",&a,&b,&c)!=3){
        printf("invalid input\n");
        return 1;
    }
    else{
        min=a;
        if(b<min){
            min=b;
        }
        if(c<min){
            min=c;
        }
        printf("%d is the smallest number",min);
    }
    return 0;
}