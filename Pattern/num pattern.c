// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j;
    int n=10;
    for(i=1;i<=n;i++){
        for(j=(n-i)+1;j<=n;j++){
            if(j==10){
                printf("0 ");
            }
            else{
                
            
            printf("%d ",j);
        }
        }
        for(j=n-1;j>=(n-i)+1;j--){
        
            printf("%d ",j);
        }
        
        printf("\n");
    }

    return 0;
}



// 0 
// 9 0 9 
// 8 9 0 9 8 
// 7 8 9 0 9 8 7 
// 6 7 8 9 0 9 8 7 6 
// 5 6 7 8 9 0 9 8 7 6 5 
// 4 5 6 7 8 9 0 9 8 7 6 5 4 
// 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 
// 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 
// 1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1 