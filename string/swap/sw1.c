#include<stdio.h>
#include<string.h>

int main(){
    char s1[20]="popular";
    char s2[20]="cat";
    char s3[20];

    printf("s1:%s\n",s1);
    printf("s2:%s\n",s2);
    strcpy(s3,s1);
    strcpy(s1,s2);
    strcpy(s2,s3);

    printf("s1:%s\n",s1);
    printf("s2:%s\n",s2);
   getch();
}