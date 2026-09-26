#include<stdio.h>
int fact(int n){
    
    if(n==1){
    return 1;
    }
    else{
       return n * fact(n-1);
    

    }
    
}
int main(){
    int n=4;
    fact(n);
    printf("the factorial is : %d",fact(n));
}
    

