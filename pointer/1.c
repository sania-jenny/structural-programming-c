#include<stdio.h>

int main(){
    int x=5;
   
    int y=10;
    int *p;
    p=&x;
    

    printf("%d\n",x);
    printf("%d\n",p);
    printf("%d\n",&x);
    printf("%d\n",*p);
     printf("%d\n",&p);
    printf("%d\n",&y);

return 0;    
}