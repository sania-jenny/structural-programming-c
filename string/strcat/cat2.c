#include<stdio.h>
#include<string.h>
int main(){

    
    char str1[30]="sylhet";//it is a good practice to have number as if the 1st str1 is small ,compiler will take smaller array and will crash to add other str
    char str2[]=" Engineering";
    char str3[]=" college";

    strcat(str1,str2);
    strcat(str1,str3);
    printf("%s",str1);

    return 0;

    
    
}