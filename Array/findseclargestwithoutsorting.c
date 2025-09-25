// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[10]={1,8,3,12,5};
    int i,n=5;
    int max;
    max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    int secmax=arr[0];
    for(i=0;i<n;i++){
        if(arr[i] != max && arr[i] > secmax){
            secmax=arr[i];
        }
    }
    printf("%d",secmax);
    
    return 0;
}