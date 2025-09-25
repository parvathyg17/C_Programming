// * 
// 2 4 
// * * * 
// 6 8 $ 12 
// * * * * * 
// 14 16 18 $ 22 24 
// * * * * * * * 
// 26 28 $ 32 34 36 38 $ 
// * * * * * * * * * 
// 42 44 46 48 $ 52 54 56 58 $
#include <stdio.h>

int main() {
   int n=5;
   int i,j;
   int num=1;
   char ch='$';
   
   for(i=1;i<=n;i++){
       for(j=1;j<=2*i-1;j++){
           printf("* ");
       }
       printf("\n");
       for(j=1;j<=2*i;j++){
           
        //   printf("%d ",num*2);
           int a=num*2;
            if (a%10 == 0) { 
               
               printf("%c ",ch);
           }
           else{
               printf("%d ",a);
           }
           
           
           num++;
           
       }
      
       printf("\n");
   }
   

    return 0;
}