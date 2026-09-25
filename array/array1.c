#include<stdio.h>
int main(){
    int sum;
    sum=0;

   int num[5] = {1,2,3,4,5};

    for(int i= 0; i<5 ; i++){
        sum=sum+num[i];
        
    }
    printf("sum of all number is : %d" ,sum);
}