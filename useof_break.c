//keep taking numbers from user until user enters odd number


#include <stdio.h>
int main(void){
    //int n,i;
    //for(i=0;i<n;i++){
>>    //    printf("enter a number:");
>>    //    scanf("%d",&n);
>>    //    if(n%2!=0){
>>    //        printf("don't enter odd number");
>>    //        break;
>>    //    }
>> 
>>   //}       
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
//break also comes out from all nested loops and main loop if it is in nested loop