// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=6;
    int i,j,k;
   for(i=1;i<=n;i++){
       for(j=1;j<=i;j++){
           if(j%2==0){
               printf("* ");
           }
           else{
           printf("%d ",i*j);
           }
       }
       printf("\n");
   }
    return 0;
}




// 1 
// 2 * 
// 3 * 9 
// 4 * 12 * 
// 5 * 15 * 25 
// 6 * 18 * 30 * 