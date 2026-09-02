//Break amount into smallest banknotes

#include<stdio.h>
int main(){
    int taka;
    printf("please enterr the TK :");
    scanf("%d" ,&taka);
    while(taka<1){
        printf("You entered a nagetive number .\n please enter a positive number :");
         scanf("%d" ,&taka);

    }
    int hundred,fifty,ten,left_ovr;
    hundred=taka/100;
    fifty=taka/50;
    ten=taka/10;
   


    printf(" you have %d notes of 100 taka",hundred);
    printf("\n you have %d notes of 50 taka",fifty);
      printf("\n you have %d notes of 10 taka",ten);

     
    

    return 0;
}
     