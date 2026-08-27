//square sum
#include<stdio.h>

int main(){
    int sum,n;
    sum=0;
    printf("Enter your positive number:");
    scanf("%d",&n);
    while(n<1){
        printf("your number is not possitive. Please enter your positive number : ");
        scanf("%d",n);
    }
    for (int i = 1; i <= n ; i++)
    {
        sum=i*i +sum ;
        printf("%d^%d+",i, i);
    }
    printf("=%d" ,sum);

return 0;
    }