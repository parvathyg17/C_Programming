#include <stdio.h>

int main() {
    int arr[10]={1,2,3,4,5};
    int n=5;
    int i,j;
    int arr1[10];
    int k=0;
    
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            arr1[k++]=arr[1];
            arr1[k++]=0;
        }
    }
    for(i=0;i<k;i++){
        printf("%d",arr1[i]);
    }
    

    return 0;
}