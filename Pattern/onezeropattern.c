// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=5;
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j%2==0){
            printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }

    return 0;
}

// 1 
// 1 0 
// 1 0 1 
// 1 0 1 0 
// 1 0 1 0 1 