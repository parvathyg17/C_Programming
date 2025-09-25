// 1 3 5 7 9 
// 1 3 5 7 
// 1 3 5 
// 1 3 
// 1 
#include <stdio.h>

int main() {
    int n=5;
    int i,j,k;
    for(i=n;i>=1;i--){
        for(j=1;j<=2*i;j+=2){
           printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}