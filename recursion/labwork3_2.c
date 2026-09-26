#include<stdio.h>

int into(int n){
    return n*n*n;
}
int sum(int n ,int j,int last){
    if(n>=last){
        return 0;
    }
    else{
        return into(n)+sum(n+j,j+1,last);
    }
}
int main(){
    int n,j,last;
    n=8;
    j=1;
    last=24;
    into(n);
    sum(n,j,last);

    printf("the sum is : %d",sum(n,j,last));
    return 0;
}