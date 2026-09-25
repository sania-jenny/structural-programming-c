#include<stdio.h>
int main(){
    char first_name[6];//without null 
    first_name[0]='s';
    first_name[1]='a';
    first_name[2]='n';
    first_name[3]='i';
    first_name[4]='a';
    

    printf("my first name is %s\n",first_name);

    char second_name[6];//with null
    second_name[0]='J';
    second_name[1]='e';
    second_name[2]='n';
    second_name[3]='n';
    second_name[4]='y';
    second_name[5]='\0';// it should be always backlash

    printf("my 2nd name is %s\n",second_name);

 return 0;
}