#include <stdio.h>
void main(){
    int a,b,c,min;
    printf("enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    min=a;
    if(b<min){
        min=b;
        
    }
    if(c<min){
        min=c;
    }
    
    printf("%d is the smallest number",min);

}