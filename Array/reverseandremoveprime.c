// Write the code to reverse the array and remove all the multiples of ‘4’ from it 

#include <stdio.h>

int main() {
    int arr[10]={1,2,3,4,8,12};
    int n=6;
    int i,j,k;
    int isprime;
    
   for(i=0;i<n/2;i++){
       int temp=arr[i];
       arr[i]=arr[n-1-i];
       arr[n-1-i]=temp;
       
       
   }
   k=0;
   for(i=0;i<n;i++){
       isprime=1;
       if(arr[i]<=1){
           isprime=0;
       }
       else{
           for(j=2;j*j<=arr[i];j++){
               if(arr[i]%j==0){
                   isprime=0;
                   break;
               }
           }
       }
       if(!isprime){
           arr[k++]=arr[i];
       }
   }
       
   n=k;
   for(i=0;i<n;i++){
       printf("%d\t",arr[i]);
   }

    return 0;
}