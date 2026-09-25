#include<stdio.h>
int main(){
    char name[30];
    printf("enter your name : ");
    gets(name);//we use gets to input multiple words
    printf("your name is : %s" ,name);
}