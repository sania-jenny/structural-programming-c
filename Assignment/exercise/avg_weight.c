//avg wight for purchase
#include<stdio.h>
int main(){

    int n1,i1,n2,i2;
    printf("enter the weight of the item 1:");
    scanf(" %d" ,&i1);
    printf("enter the number of the item 2:");
    scanf(" %d" ,&n2);
    printf("enter the weight of the item 2:");
    scanf(" %d" ,&i2);
    printf("enter the number of the item 2:");
    scanf(" %d" ,&n2);
    int avg;
    avg=(i1+i2)/(n1+n2);
    printf("the average is : %d" ,avg);


    return 0;




}