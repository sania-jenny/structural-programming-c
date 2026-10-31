#include<stdio.h>
#include<string.h>
int main(){
    printf("\n\n*******************\n\nORGANIGATION\n\n*******************\n\n");

    char interested;
    printf("ARE YOU INTERESTED ABOUT THIS ORG ?\n (Y/N) : ");
    scanf(" %c",&interested);
    if(interested!='y' && interested!='Y'){
        printf("Thank you. Goodbye!\n");
        return 0;
    }
     printf("\nWELCOME !!! \n\n\n ");
     printf("there are 10 companies you can search on .\n" );
    typedef struct company{
        char location[100];
        char nameofcompany[100];
        int numofemployee;
        int jobsopportunity;
    }cmpy;
    cmpy c1={"sylhet","XYZ company",303,10};
    cmpy c2={"Rajshahi", "ABC company",400,30};
    cmpy c3={"Cumillah","MNY company",302,1};
    cmpy c4={"Chittagong", "SDF company",290,10};
    cmpy c5={"jessore", "GHJ company",308,20};
    cmpy c6={"Habiganj", "KLP company",450,18};
    cmpy c7={"Dhaka", "OPQ company",467,10};
    cmpy c8={"Norshingdi", "QWE company",349,10};
    cmpy c9={"Barishal", "MNO company",367,3};
    cmpy c10={"X","BMW company",300,10};

    cmpy list[]={c1,c2,c3,c4,c5,c6,c7,c8,c9,c10};
    char loc[100];
    char input[23];
    char name[100];
    int emplo;
    printf(" enter L for Location\n enter N for name \n enter E for employees \n please Enter what you like  : ");
    scanf("%s",input);
    if(strcmp(input,"L")==0){
    
        printf("Enter the location : ");
    
        scanf(" %[^\n]",loc);
    
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
}
if(strcmp(input,"N")==0){
    printf("Enter The name of the company: ");
    scanf(" %[^\n]",name);
    int found=0;
    for(int i=0; i<11; i++){
        if(strcmp(list[i].nameofcompany,name)==0){
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
        }
    else if(strcmp(input,"E")==0){
        printf("Enter the number of employee : ");
        scanf("%d",&emplo);
        int found=0;
        for(int i=0;i<11;i++){
        if(list[i].numofemployee==emplo){
         printf("The name of the company is : %s\n",list[i].nameofcompany);
            printf("Total employees are  : %d\n",list[i].numofemployee);
            printf("jobs oppotunities left  : %d\n",list[i].jobsopportunity);
            found = 1;
            break;
        }
        }
        if(!found){
            printf("No company found with this number of employees.\n");
        }

    
    }
       printf("\n\nTHANK YOU SO MUCH\n");
  
    return 0;  
    
}
