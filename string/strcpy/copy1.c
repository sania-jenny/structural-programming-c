#include<stdio.h>
#include<string.h>
int main(){
    char org[]="sylhet is beautiful";
    char copy[30];
    strcpy(copy,org);
    printf("the org version is : %s\n",org);
    printf("the copy version is : %s",copy);

    return 0;
}