#include<stdio.h>
int main(){
    struct person{
        char name [100];
        int age;
        float salary;
    };
    struct person s1={"ruhan alom",34,300000.0};
    struct person s2={"Farjana akter",24,10000.0};
    struct person s3={"sania akter jenny",21,500000.0};

    printf("the name of the first person is : %s\n",s1.name);
    printf("age: %d\n",s1.age);
    printf("salary:%f\n\n\n",s1.salary);

    printf("the name of the second person is : %s\n",s2.name);
    printf("age: %d\n",s2.age);
    printf("salary:%f\n\n\n",s2.salary);
    

    printf("the name of the third person is : %s\n",s3.name);
    printf("age: %d\n",s3.age);
    printf("salary:%f\n\n\n",s3.salary);

    return 0;


}