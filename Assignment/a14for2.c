//avg of odd number 
#include<stdio.h>

int main(){
    int i,n,sum ,count;
    sum=0;
    count=0;
    printf("enter N :");
    scanf(" %d",&n);

    for(i=0; i<=n; i++){
        if(i%2 !=0){
            sum+=i;
            count++;
        }
    }
        printf("the avg of the odd numbers : %d/ %d",sum,count );
    
    return 0;
}