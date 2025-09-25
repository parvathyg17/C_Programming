/*count and freq*/

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
        freq[i]=0;
    }
    for(i=0;i<n;i++){
        if(freq[i]==0){
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
    printf("frequencies of each element");
    for(i=0;i<n;i++){
        if(freq[i]>0){
            printf("\n%d occurs %d times\n",arr[i],freq[i]);
        }
    }
    printf("unique elements are:");
    for(i=0;i<n;i++){
        if(freq[i]==1){
            printf("%d\t",arr[i]);
        }
    }
     printf("duplicate elements are:");
    for(i=0;i<n;i++){
        if(freq[i]>1){
            printf("%d\t",arr[i]);
        }
    }
    
    return 0;
}