#include <stdio.h>

int main() {
    int n; // height of the M
    int i, j;
    printf("enter the limit");
    scanf("%d",&n);
    if(n%2 ==0 ){
        n=n+1;
    }
    else{
        n=n;
    }

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= n; j++) {
            if(j == 1 || j == n || (i == j && i <= n/2+1) || (i + j == n + 1 && i <= n/2)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
