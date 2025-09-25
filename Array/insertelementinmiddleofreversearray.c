// Write a program to reverse an array and insert a new element in the middle.
// Input:
// Array: {4, 7, 9, 1}
// Element to insert: 6
// Output:
// {1, 9, 6, 7, 4}


#include <stdio.h>

int main() {
  int arr[10]={4,7,9,1};
  int i,j;
  int n=4;
  int new;
  int temp;
  
  printf("enter the element to insert in the middle:");
  scanf("%d",&new);
  
  for(i=0;i<n/2;i++){
      temp=arr[i];
      arr[i]=arr[n-i-1];
      arr[n-i-1]=temp;
  }
  for(i=n;i>=n/2;i--){
  arr[i]=arr[i-1];
  }
  arr[n/2]=new;
  n++;
  
  printf("array after reverse:");
  for(i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  
  
 
    return 0;
}