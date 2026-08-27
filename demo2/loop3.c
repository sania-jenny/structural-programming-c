#include<stdio.h>

int main(){
    int n , factorial;
    factorial=1;
    while(1){
    printf("please enter your number : ");
    scanf("%d" ,&n);
    while(n<0){
        printf("you have put a nagetive number . pleaase enter a positive number : ");
    }
    for(int i=1; i<=n ; i++){
        factorial=factorial*i;
    }
    printf(" your factorial is =%d \n\n" , factorial);
}
return 0;    
}