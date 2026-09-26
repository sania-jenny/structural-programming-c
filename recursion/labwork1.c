#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int sum(int n){
    if(n==1){
        return fact(1)/1;
    }
    else{
        return (fact(n)/n)+sum(n-1);
    }
}
  int main(){
    int n;
    n=4;
    fact(4);
    printf("the answer is %d",sum(n));
  }  
