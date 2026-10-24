// book with it's page number ,prize ,name

#include<stdio.h>
#include<string.h>
int main(){

    struct book{
        int page;
        float prize;
        char name[100];
    };
     

    struct book s1={100,200.0,"english and grammar"};
    struct book s2={270, 390.0, "computer science"};
    struct book s3={450,789.0,"literature"};


    
    printf("the book name is %s \n the prize is :%f\n the page number is %d\n  ",s1.name,s1.prize,s1.page);

    return 0;
       
}