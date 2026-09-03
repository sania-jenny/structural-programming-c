//convert days to years ,weeks and days
#include<stdio.h>

int main(){
    int daysin;
    printf("Please enter the numners of days : ");
    scanf(" %d" ,&daysin);
    int years,weeks,days;
    years = daysin/365;
    weeks=years/7;
    days=daysin -(years*365+weeks*7);
    printf("years : %d \nweeks:%d \n days:%d " ,years ,weeks ,days);




    return 0;
}