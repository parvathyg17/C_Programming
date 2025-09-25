//Write a program that takes an unsorted array of integers and deletes all the prime numbers from the array. For example:
// Input:
// arr[] = {10, 11, 14, 3, 9, 7, 15, 18}
// Output:
// Array after deletion: {10, 14, 9, 15, 18}

#include <stdio.h>

int main() {
   int arr[100];
   int n;
   int isprime;
   int i,j;
   
   printf("enter array limit:");
   scanf("%d",&n);
   printf("enter array values");
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++){
       if(arr[i]>1){
       isprime=1;
       for(j=2;j*j<=arr[i];j++){
           if(arr[i]%j==0){
               isprime=0;
               break;
           }
       }
       
       if(isprime){
           for(j=i;j<=n;j++){
               arr[j]=arr[j+1];
           }
               n--;
               i--;
           }
       }
   }
   printf("After deleting prime no:");
   for(i=0;i<n;i++){
   printf("%d\t",arr[i]);
   }
   
   

    return 0;
}