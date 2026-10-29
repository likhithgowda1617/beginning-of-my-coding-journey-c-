//keep taking numbers from user until user enters odd number


#include <stdio.h>
int main(void){
    
    int n;
    while(1){
        printf("enter a number:");
        scanf("%d",&n);
        if(n%2!=0){
            printf("thank you");
            break;
        }
    }

}
//break exits only the innermost loop it is in, not the outer loops