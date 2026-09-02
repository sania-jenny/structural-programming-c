//calculate distance between two points
#include<stdio.h>
#include<math.h>
int main(){
    float x1,x2, y1 ,y2, distance ;
     printf("please enter your number for x1 :");
    scanf("%f" ,&x1);
     printf("\nplease enter your number for y1:");
    scanf("%f" ,&y1);
     printf("\nplease enter your number for x2:");
    scanf("%f" , &x2);
     printf("\nplease enter your number for y2 :");
    scanf("%f" ,&y2);
    distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    
    printf(" \nthe distance is %f " , distance);

    return 0;
}