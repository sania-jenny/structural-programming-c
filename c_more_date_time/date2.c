#include<stdio.h>
#include<time.h>

int main(){
    time_t crtime;
    time(&crtime);

    printf("the time is %s",ctime(&crtime));

    return 0;
    
}