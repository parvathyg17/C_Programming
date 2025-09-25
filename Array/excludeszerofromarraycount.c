// Write a program that excludes zeros from the frequency count.
#include <stdio.h>

int main() {
  int arr[10]={0, 1, 2, 0, 2, 1, 0};
  int i,j;
  int n=7;
  int count;
  
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count=-1;
                break;
            }
        }
        if(count==-1) continue;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(arr[i] != 0){
            printf("%d occurs %d times\n",arr[i],count);
        }
    }


    return 0;
}