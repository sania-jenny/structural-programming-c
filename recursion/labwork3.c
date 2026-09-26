//7^3+8^3+10^3+13^3+17^3+.....+n^3

#include<stdio.h>
int into(int n){
    return n*n*n;
}
int sum(int n ,int j,int last){
    if(n==last){
        return 0;
    
    }
    else{
        return into(n)+sum(n+j,j+1,last);
    }
}
int main(){
    int n ,last;
    n=7;
    last=17;
    into(n);
    printf("the sum is : %d",sum(7,1,17));

    return 0;
    
}