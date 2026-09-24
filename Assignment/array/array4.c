 //calculates the average of different ages:
#include<stdio.h>
int main(){
    int sum;
    sum=0;
    int age[]={20,40,50,60,70,80,90,10};
    int length=sizeof(age)/sizeof(age[0]);
    printf("the lenght is %d\n",length);
    for(int i=0;i<length;i++){
        sum=sum+age[i];
    
    }
    printf("the avg age is : %d", sum/length);
    
    return 0;

}