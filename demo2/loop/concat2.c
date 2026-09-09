#include<stdio.h>
#include<string.h>
int main(){
    char str1[30]="this ";
    char str2[10]="girl's ";
    char str3[10]="name ";
    char str4[10]="is jenny";
    strcat(str1 ,str2);
    strcat(str1 ,str3);
    strcat(str1,str4);
    printf("%s",str1);
    return 0;

}