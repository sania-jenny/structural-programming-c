//sum of numbers
#include<stdio.h>

int main(){

    int n, i, sum;
    sum = 0;
    printf("enter N : " );
    scanf(" %d",&n);

    for(i=0; i<=n; i++){
        sum+=i;
    
  
    }
    printf(" the total sum from o to %d is : %d" ,n,sum);

    return 0;
}