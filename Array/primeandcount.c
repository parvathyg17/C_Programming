/*prime num and count*/
#include <stdio.h>

int main() {
    int arr[10]={1,2,1,4,4,3,4};
    int i,j,count;
    int n=7;
    int primcount=0;
    
     printf("\nPrime numbers in the array: ");
    for(i = 0; i < n; i++) {
        if(arr[i] > 1) {
            int isPrime = 1;
            for(j = 2; j*j<=arr[i]; j++) {
                if(arr[i] % j == 0) {
                    isPrime = 0;
                    break;
                   
                }
            }
            if(isPrime){
                printf("%d ", arr[i]);
                 primcount++;
            }
        }
    }
    printf("\ncount of prime no:%d",primcount);
    return 0;
}