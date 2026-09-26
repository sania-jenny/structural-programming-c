#include<stdio.h>

void forword(int num){
    if(num==1){
        printf("%d",num);
    }
    else{
        
        forword(num-1);
        printf("%d",num);
    }
}

int main(){
    int num;
    printf("please enter your number :");
    scanf("%d",&num);

    forword(num);
    getch();
}
