//asking grade and putting cmt and if not known that asking for number and giving grade amnd cmt
#include<stdio.h>

int main(){
    char grade;
    printf(" we will let you know how you performed . \n Please enter your grade ");
    scanf("%c" , &grade);
    switch(grade){
        case('A'):
        printf("you have got A . thta`s awesome");
        break;
        case('B'):
        case('C'):
        printf("not bad but need to improve if you have a goal");
        break;
        case('F'):
        printf("ow you failed , but if you put more effort ,yoou will nail it next time ");
        break;
        default:
        printf("that doesn`t exsit");
        break;
    }

    printf("\n\n\nthank you for visiting ");
return 0;
}