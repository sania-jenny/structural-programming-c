//lenght of array 
#include<stdio.h>
int main(){
    int myMarks[]={80,60,50,75,68,92,67,49};
    int total_sub=sizeof(myMarks)/sizeof(myMarks[0]);
    printf("total subject is : %d",total_sub);
}