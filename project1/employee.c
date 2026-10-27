#include<stdio.h>
#include<string.h>
int main(){

    typedef struct company{
        char location[100];
        char nameofcompany[100];
        int numofemployee;
        int jobsopportunity;
    }cmpy;
    cmpy c1={"sylhet","XYZ company",300,10};
    cmpy c2={"Rajshahi", "ABC company",400,30};
    cmpy c3={"Cumillah","MNY company",300,1};
    cmpy c4={"Chittagong", "SDF company",290,10};
    cmpy c5={"jessore", "GHJ company",308,20};
    cmpy c6={"Habiganj", "KLP company",450,18};
    cmpy c7={"Dhaka", "OPQ company",467,10};
    cmpy c8={"Norshingdi", "QWE company",300,10};
    cmpy c9={"Barishal", "MNO company",300,3};
    cmpy c10={"X","BMW company",300,10};

    cmpy list[]={c1,c2,c3,c4,c5,c6,c7,c8,c9,c10};
    char loc[100];
        printf("Enter the location : ");
    fflush(stdout);
    scanf("%[^\n]",loc);
    loc[strcspn(loc, "\n")] = '\0';
    int found=0;
    
    for(int i=0;i<11;i++){
        if(strcmp(list[i].location,loc)==0){
            printf("The name of the company is : %s\n",list[i].nameofcompany);
            printf("Total employees are  : %d\n",list[i].numofemployee);
            printf("jobs oppotunities left  : %d\n",list[i].jobsopportunity);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("No company found in this location.\n");
    }

    return 0;  
    

}