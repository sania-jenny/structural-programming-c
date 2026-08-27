//find out vowel am=nd chonsonent
#include<stdio.h>
int main(){
    char ch;
    printf("Please enter your alphabet:");
    //will put input 
    scanf(" %c",&ch);
//now the condition 
if(ch=='a' ||ch=='A'||ch=='e'|| ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
    printf("The alphate is VOWELS");
} else {
        printf("The alphate is CHOSONENT");

    }
return 0;
    /* code */
}