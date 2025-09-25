/*Write a program to reverse a 1D array by shifting elements (without extra space). For example:*/ 
#include <stdio.h>

int main() {
    int i,j;
    int arr[10]={1,2,3,4,5};
    int n=5;
    printf("array values are:");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    for(i=0;i<n-1;i++){
        int temp=arr[0];
        for(j=0;j<n-i-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-i-1]=temp;
        
    }
    printf("\narray after reversed");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}