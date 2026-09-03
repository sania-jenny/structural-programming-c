#include <stdio.h>
int main(){
   int a,b,c;

   printf("enter your number :");
   scanf("%d %d %d ", &a ,&b, &c);

  if(a>b && a>c){
      pritnf("%d is the biggest number ",a);}
  else if (b>a && b>c) {
      printf("%d is the biggest number",b);
    } 
  else {
    printf("%d is the biggest number " ,c);}
return 0;
    }