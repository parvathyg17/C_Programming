// /Write a program to rotate an array by k positions to the right. For example:
// Input:
// arr = {1, 2, 3, 4, 5}, k = 2
// Output:
// arr = {4, 5, 1, 2, 3}




#include <stdio.h>

int main() {
    int arr[20]={1, 2, 3, 4, 5};
    int n=5;
    int i,j;
    int temp;
    int k=2;
    
    for(i=0;i<k;i++){
        temp=arr[n-1];
    for(j=n-1;j>0;j--){
        arr[j]=arr[j-1];
    }
    arr[0]=temp;
    }
    
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
  
 
    return 0;
}