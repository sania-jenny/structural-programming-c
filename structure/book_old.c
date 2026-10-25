#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[40];
        int page;
        int prize;

    };
    struct book b1={"english",200,400};//this is a way to initialize a structure variable
    /*struct book b1;
    b1.name="english";}*/ //this is a wrong  way to initialize a structure variable bcz

    struct book b2 ;
    strcpy(b2.name, "Mathematics");
    b2.page=300;
    b2.prize=200;//this is a right way to initialize a structure variable

    printf("book name is %s\n",b1.name);
    printf("pages : %d\n",b1.page);
    printf(" prize : %d\n",b1.prize);
    
    
    printf("book name is%s\n",b2.name);
    printf("pages : %d\n",b2.page);
    printf(" prize : %d\n",b2.prize);
    
return 0;
}
    
    
   
    


    
