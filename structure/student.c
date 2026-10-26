#include<stdio.h>
#include<string.h>

int main(){

    typedef struct school{

        char name[100];
        int roll;
        float gpa;

    } std;
     
    std s1={"muntaha",1,5.00};
    std s2={"nuha",2,4.00};
    std s3={"ruhan",3,4.40};
    std s4={"fahim",4,5.00};
    
    printf("the name is %s\n",s1.name);
    printf("roll:%d\n",s1.roll);
    printf("gpa= %f\n",s1.gpa);

     printf("the name is %s\n",s2.name);
    printf("roll:%d\n",s2.roll);
    printf("gpa= %f\n",s2.gpa);

     printf("the name is %s\n",s3.name);
    printf("roll:%d\n",s3.roll);
    printf("gpa= %f\n",s3.gpa);

     printf("the name is %s\n",s4.name);
    printf("roll:%d\n",s4.roll);
    printf("gpa= %f\n",s4.gpa);






return 0;
}