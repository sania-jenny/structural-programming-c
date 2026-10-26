#include<stdio.h>
#include<string.h>
int main(){
   typedef struct book{
        char name[50];
        int page;
        int prize;

    }book;
    book s1={"english",300,300};
    book s2={"math",400,300};

    printf("%s\n",s1.name);
    printf("%s\n",s2.name);

}
    