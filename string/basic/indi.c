#include<stdio.h>
int main(){

    char name[]="Shajeda";
    printf("%d\n",sizeof(name));
    for(int i=0; i<sizeof(name)-1; i++){//sizeof(name) is 8 is sizeof(name)-1 means 7 ,
       
        printf("%c\n",name[i]);

    }
}