#include<stdio.h>
void sum(int a,int b){
    printf("the sum is : %d",a+b);
}


int main(){
    int a,b;
    printf("enter your first number :\n ");
    scanf("%d",&a);

    printf("enter your second number :\n ");
    scanf("%d",&b);
    sum(a,b);


}