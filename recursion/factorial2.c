#include<stdio.h>
int fact2(int number){
    if(number==1){
        return 1;

    }
    else{
        return number* fact2(number-1);
    }

}
int main(){
    int number ;
    printf("enter your number :");
    scanf("%d",&number);
    fact2(number);

    printf("the answer is :%d",fact2(number));
}