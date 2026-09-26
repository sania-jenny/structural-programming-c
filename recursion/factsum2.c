#include<stdio.h>
int fact(int n ){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int sum(int n){
    if(n==1){
        return fact(1);
    }
    else{
        return fact(n)+sum(n-1);
    }
}
int main(){
    int n=8;
    fact(n);

    printf("the value is : %d",sum(n));

    return 0;

}