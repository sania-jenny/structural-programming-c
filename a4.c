//parameter and area of circle 
#include<stdio.h>

int main(){
    const pie=3.1416;
    float r ;
    scanf(" %f" ,&r);
    float parameter=2*pie*r;
    float area=pie*r*r;

    printf("parameter of circle is %f \n Area of circle is %f " ,parameter,area);

 return 0;   
}