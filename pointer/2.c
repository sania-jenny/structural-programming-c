//swapping two value 
#include<stdio.h>
int main(){

    int x=5;
    int y=10;
    int *ptr1, *ptr2;
    ptr1=&x;
    ptr2=&y;
    int temp; //making a temporary veriable 
    temp=*ptr1; //putting the value of x in temp so the x is empty now
    *ptr1=*ptr2; //than putting the value of y in x ,so y is empty now 
    *ptr2=temp; // putting val of x in temp 

    printf("x = %d\n",x);
    printf("y = %d\n",y);

    return 0;
}