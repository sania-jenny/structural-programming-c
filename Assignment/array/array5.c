// lowest age among different ages
#include<stdio.h>
int main(){
    int age[]={20,40,12,56,79,90,34,11};
    int len =sizeof(age)/sizeof(age[0]);
    int lowest=age[0];

    for(int i=1; i<len ; i++){
        if(lowest>age[i]){
            lowest=age[i]; // as 12 is the 1st number that is smaller than 20 ,so 1 2becomes new lowest number and go on loop
        }
    }
    printf("the lowest number is %d",lowest);
    
    return 0;
}