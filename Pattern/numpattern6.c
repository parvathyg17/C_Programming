// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k;
    int n=4;
    for(i=1;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }

    return 0;
}



// 0 1 
// 0 2 4 
// 0 3 6 9 
// 0 4 8 12 16 