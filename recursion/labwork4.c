#include<stdio.h>
#include<math.h>

double base (double n){
    return pow(n,0.5);
}
double sum(double n){
    if(n==1){
        return 1;
    }
    else{
        return base(n)+sum(n-1);
    }
}
int main(){
    int n=3;
    printf("the sum is %2lf",sum(n));

}