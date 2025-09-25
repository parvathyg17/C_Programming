/*Write a program to reverse a given 1D array in-place (without using any extra arrays).*/


#include <stdio.h>

int main() {
    int i,j;
    int temp;
    int arr[10]={1,2,3,4,5};
    int n=5;
    
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
        
    }
    printf("reversed array is:");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}