//Write a C program to merge two unsorted arrays and then sort the result.


#include <stdio.h>

int main() {
   int arr1[10];
   int arr2[10];
   int n1,n2,i,j,m;

   int new[20];
  
   
   printf("enter the size of 1st array ");
   scanf("%d",&n1);
   printf("enter the array values:");
   for(i=0;i<n1;i++){
       scanf("%d",&arr1[i]);
        new[i]=arr1[i];
   }
   
   
   
    printf("enter the size of 2nd array ");
   scanf("%d",&n2);
    printf("enter the array values:");
   for(i=0;i<n2;i++){
       scanf("%d",&arr2[i]);
       new[n1+i]=arr2[i];
   }

   //sorting the 3rd array after merging
   m=n1+n2;
   for(i=0;i<m-1;i++){
       for(j=i+1;j<m;j++){
           if(new[i]>new[j]){
               int temp=new[i];
               new[i]=new[j];
               new[j]=temp;
           }
       }
   }

   
   printf("new sorted array");
   for(i=0;i<m;i++){
       printf("%d\t",new[i]);
   }
   
   
   
  
return 0;
}
  
    