#include<stdio.h>
int fact(int j){
     if(j==1){
        return 1;

    }
    else{
        return j* fact(j-1);
    }

}
int sum(int j){
    if (j==1)
    {
     return fact(1);
    }
    else{
        return fact(j)+sum(j-1);
    }
    
}
int main(){
    int j;
    scanf("%d",&j);
    fact(j);
    printf("the sum is :%d",sum(j));
    return 0;
}