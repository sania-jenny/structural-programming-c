#include<stdio.h>
#include<string.h>

int main(){
    typedef struct cricketers{
        char name[20];
        int age;
        int numberOfMatch;
        float avg;


    }cktr;

    cktr arr[20];

    for(int i=1;i<20;i++){
        scanf(" %[^\n]",arr[i].name);// there should be a space like (" %[^n]"arr[i].name and no &)
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].numberOfMatch);
        scanf("%f",&arr[i].avg);


    }
    for(int i=1;i<20;i++){
        printf("the name of the cricketer is : %s\n",arr[i].name);
        printf("age :%d\n",arr[i].age);
        printf("Number of matches : %d\n",arr[i].numberOfMatch);
        printf("total avg :%f\n",arr[i].avg);
}
return 0;

}
