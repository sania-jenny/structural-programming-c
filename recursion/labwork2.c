//1x5+2x5+3x5......nx5

#include<stdio.h>
int into (int n){
    return n*5;

}
int sum(int n){
    if(n==1){
        return into(1);
    }
    else{
        return into(n)+sum(n-1);
    }
}

int main(){
    int n=4;
    into(4);

    printf("the sum is : %d",sum(n));

}