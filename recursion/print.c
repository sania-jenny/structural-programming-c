#include<stdio.h>
void print(int num){
    if(num==1){
        printf("%d",num);

    }
    else {
    printf("%d",num);

    print(num-1);
   
    }
}

int main(){
    int num;
    num=4;
    print(num);


}