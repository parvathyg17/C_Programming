
//Count how many duplicate numbers are divisible by a given number (e.g., 3).
#include <stdio.h>

int main() {
    int arr[10];
    int i,j;
    int n;
    int count;
    int freq[10];
    
    printf("enter array limit:");
    scanf("%d",&n);
    
    printf("enter array values:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i]=0;
    }
    for(i=0;i<n;i++){
        if(freq[i]==0&&arr[i]%3==0){
            count=1;
            for(j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    freq[j]=-1;
                }
            }
            freq[i]=count;
        }
    }
    printf("duplic elements are:");
    int duplicount=0;
    for(i=0;i<n;i++){
        if(freq[i]>1){
            duplicount++;
            printf("%d ",arr[i]);
        }
    }
    
     
      printf("\ncount of duplic elements divisible by three:%d",duplicount);
     
   
    return 0;
}