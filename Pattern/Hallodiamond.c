// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=7;
    int i,j,k;
    
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1){
            printf("* ");
        }
        else{
            printf("  ");
        }
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(k=1;k<=n-i;k++){
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1||i==n){
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


//             * 
//           *   * 
//         *       * 
//       *           * 
//     *               * 
//   *                   * 
// *                       * 
//   *                   * 
//     *               * 
//       *           * 
//         *       * 
//           *   * 
//             * 