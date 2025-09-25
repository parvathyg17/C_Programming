//How to merge two arrays without duplicates in C?



#include <stdio.h>

int main() {
   int arr1[10];
   int arr2[10];
   int freq[20]={0};
   int n1,n2,i,j,m;
    int count;
    
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
   for (i = 0; i < m; i++) {
        freq[i] = 1;   // assume unique initially
    }
   for(i=0;i<m;i++){
       if(freq[i]==0)
          continue;
       count=1;
           for(j=i+1;j<m;j++){
               if(new[i]==new[j]){
                   count++;
                   freq[j]=0;
               }
           }
       }
       
   
   for(i=0;i<m;i++){
       if(freq[i]==1){
       printf("%d\t",new[i]);
        }
   }
   
   
   
   
   
   
  
return 0;
}
  
    