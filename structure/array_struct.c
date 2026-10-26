#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[100];
        int page;
        int prize;
        int sell;

    }book;
    
    book arr[4];
    arr[0].page=300;
    arr[0].prize=200;
    arr[0].sell=10000000;
    strcpy(arr[0].name,"Poddhoja");

    arr[1].page=200;
    arr[1].prize=300;
    arr[1].sell=2000000;
    strcpy(arr[1].name,"Mira");

    arr[3].page=500;
    arr[3].prize=400;
    arr[3].sell=5000000;
    strcpy(arr[3].name,"Topu");


    arr[2].page=350;
    arr[2].prize=200;
    arr[2].sell=1000000;
    strcpy(arr[2].name,"manus");


    for(int i=0; i<5; i++){

        printf("the name of the book is : %s",arr[i].name);
        printf("prize is : %d\n ",arr[i].page);
        printf("prize is : %d\n",arr[i].prize);
        printf("prize is : %d\n",arr[i].sell);
    }



    return 0;



    




    
}