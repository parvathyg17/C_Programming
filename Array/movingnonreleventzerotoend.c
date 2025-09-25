// Write a program to move all zeros in an array to the end while maintaining the relative order of non-zero elements. For example:
// Input:
// arr = {0, 1, 9, 8, 4, 0, 2, 7, 0}
// Output:
// arr = {1, 9, 8, 4, 2, 7, 0, 0, 0}


#include <stdio.h>

int main() {
int arr[20]={0, 1, 9, 8, 4, 0, 2, 7, 0};
int i;
int n=9;

int count=0;

for(i=0;i<n;i++){
   if(arr[i] != 0){
    arr[count++] = arr[i];
   }
   
}
for(i=count;i<n;i++){
    arr[i]=0;
}
printf("After moving all zeros in an array to the end:\n");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}