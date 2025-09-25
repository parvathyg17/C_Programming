/*average and count of even numbers*/

#include <stdio.h>

int main() {
    int i,j;
    int sum=0;
    int arr[10]={1,2,3,4,5};
    int n=5;
    int count=0;
    
    for(i=0;i<n;i++){
        if(arr[i]%2 == 0){
            sum = sum + arr[i];
            count++;
        }
    }
    printf("%d",sum);
    int avg=sum/count;
    printf("\n%d",avg);
    return 0;
}