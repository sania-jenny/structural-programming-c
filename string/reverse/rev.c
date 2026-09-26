#include<stdio.h>
int main(){

    char s1[15]="Sylhet";
    char s2[15];
    int i=0;
    int len=0;
    while(s1[i]!='\0'){
        i++;
        len++;
    }
    for(int j=0;j<len; j++){
      
       s2[j]=s1[len-1-j];
       s2[len]='\0';
    }
    printf("%s",s2);
}