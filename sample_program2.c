#include <stdio.h>
#include <math.h>
int main(void){
    int a,b,c;float avg;
    printf("enter three numbers:\n");
    if(scanf("%d%d%d",&a,&b,&c)!=3){
        printf("invalid input\n");
        return 1;
    }
    else{
        printf("%.2f is the average of three numbers",avg=(a+b+c)/3.0);
    }
    return 0;
}