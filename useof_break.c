//keep taking numbers from user until user enters odd number


#include <stdio.h>
int main(void){
    int n,i;
    for(i=0;i<n;i++){
        printf("enter a number:");
        scanf("%d",&n);
        if(n%2!=0){
            printf("don't enter odd number");
            break;
        }

        printf("%d\n",n);

    }

}
//break also comes out from all nested loops though if it is in nested loop