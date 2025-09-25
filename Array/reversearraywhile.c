
#include <stdio.h>

int main() {
    int arr[10];
    int n;
    int i;
   
    
    
    printf("enter size of array");
    scanf("%d",&n);
    
    printf("enter array values");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
     int start=0;
    int end=n-1;
    
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        
        start++;
        end--;
    }
     printf("array after reversed:");
    for(i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }

    return 0;
}