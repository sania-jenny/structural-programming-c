#include<stdio.h>
int main(){

    int arr[]= {10,20,30,40};
    int *(p);
    p=arr;
    sizeof(arr[0]);

    printf("the first number is %d",*p);
    printf("the 2nd number is %d",*(p+1));
    printf("the 3rd number is %d",*(p+2));
    printf("the 4th number is %d",*(p+3));
    printf("the 5thth number is %d",*(p+4));
    

    printf("the first add is %p",p);
    printf("the 2nd add is %p",(p+1));
    printf("the 3rd add is %p",(p+2));
    printf("the add is %d",sizeof(arr[0]));





}