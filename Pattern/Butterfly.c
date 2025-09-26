#include <stdio.h>

int main() {
    int n=5;
    int i,j,k,h;
    
    // printf("Enter the size of the butterfly pattern: ");
    // scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(k=i;k<=2*(n)-i-1;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(k=i;k<=2*(n)-i-1;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *