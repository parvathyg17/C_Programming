// Find the element with the highest frequency .
#include <stdio.h>

int main() {
    int arr[20] = {1, 1, 2, 5, 2, 7, 9, 3, 1, 5};
    int n = 10;
    int i, j, count;
    int maxele=arr[0];
    int maxcount=0;
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
        
            printf("%d occurs %d times\n",arr[i],count);
            if(count>maxcount){
                maxcount=count;
                maxele=arr[i];
            
            }
    }
    printf("%d count is %d",maxele,maxcount);
    

    return 0;
}
