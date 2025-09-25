// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=4;
    int i,j,k;
    for(i=n;i>=1;i--){ 
        for(j=1;j<=i;j++){
           printf("%d ",j);
        }
        for(k=1;k<=2*(n-i);k++){
            printf("* ");
        }
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}


// 1 2 3 4 4 3 2 1 
// 1 2 3 * * 3 2 1 
// 1 2 * * * * 2 1 
// 1 * * * * * * 1 