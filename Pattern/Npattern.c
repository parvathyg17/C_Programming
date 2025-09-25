// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=10;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1||i==j||j==n){
            printf("* ");
        }
        else{
            printf("  ");
        }
        }
        printf("\n");
    }
    

    return 0;
}