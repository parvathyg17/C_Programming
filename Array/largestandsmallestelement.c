
#include <stdio.h>

int main() {
    int arr[20]={32, 4, 71, 9, 55, 13, 19, 72};
    int n=8;
    int i,j;
    int max=arr[0];
    int min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Largest no is: %d ",max);
     printf("\nSmallest no is: %d ",min);
     
    

 
    return 0;
}