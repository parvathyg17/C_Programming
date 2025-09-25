// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=9;
    int i,j,k;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
         printf("%d ",j);
        
        }
        
        
        printf("\n");
    }
    
    
    //
     for(i=n-1;i>=1;i--){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
         printf("%d ",j);
        
        }
        
        
        printf("\n");
    }
    

    return 0;
}