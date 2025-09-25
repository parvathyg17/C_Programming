// Create a program to merge two arrays by inserting one array into another
#include <stdio.h>

int main() {
    int arr[20];
    int arry[10];
    int n=5;
    int i,j,k;
    int pos=2;
    
    
    printf("enter array values");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("enter array values");
    for(i=0;i<n;i++){
        scanf("%d",&arry[i]);
        
    }
    for(i=n-1;i>=pos-1;i--){
        arr[i+n]=arr[i];
        
    }
    
    
    
    for(i=0;i<n;i++){
       
        arr[pos-1+i]=arry[i];
    }
    printf("After merge array values are:");
    for(i=0;i<n+n;i++){
        printf("%d ",arr[i]);
    }
    
        

    return 0;
}