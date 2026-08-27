
#include<stdio.h>

int main(){
    char gender;
    printf("please enter your gender {F/M} : ");
    scanf(" %c" ,&gender);
    gender=='F'? printf("you are a female") : printf("you are a male");
    

    return 0;
}