#include <stdio.h>

int fact(int i){
    if(i<=1){
        return 1;
    }
    else {
    return i*fact(i-1);
    }

}
int factj(int j){
    if(j==1){
        return 1;
    }
    else {
        return j*factj(j-1);
    }
}

int main(){
    int row ,i,j,pascal;

    printf("enter the row number : ");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(j=0;j<row-i;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            pascal=fact(i)/(fact(j)*fact(i-j));
            printf(" %d",pascal);

        }
    printf("\n");
    }
    return 0;
}



 