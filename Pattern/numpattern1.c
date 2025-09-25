// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=5;
    int i,j,k;
    for(i=n;i>=1;i--){
        for(k=1;k<=n-i;k++){
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++){
         printf("%d ",j);
        
        }
        printf("\n");
    }
    

    return 0;
}