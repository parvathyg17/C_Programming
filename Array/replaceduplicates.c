/*Replace all duplicate numbers in the array with -1 and print the modified array*/

#include <stdio.h>

int main() {
    int i;
    int j;
    int n;
    int freq[10];
    int count;
    int arr[10];
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
       
    }
    for(i=0;i<n;i++){
        if(arr[i] != -1){
            for(j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                   arr[j]=-1;
                }
            }
        }
    }
     printf("duplicate elements are:");
    for(i=0;i<n;i++){
        
            printf("%d\t",arr[i]);
        }
    
    
    return 0;
}