#include<stdio.h>
int main(){
    //ordering coffee or tea
    int choice;
    
    printf("please enter what you want to order(1/2) :\n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("you have ordered TEA\n");
        break;
        case 2:
        printf("you have ordered COFFEE\n");
        break;
        default:
        printf("you have not clicked any of them ");
    }


    return 0;
}