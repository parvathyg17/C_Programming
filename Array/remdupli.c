#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 3, 5, 1, 2};
    int n = 7;
    int i, j, count;
    int visited[10] = {0};  

    for (i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }

        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // mark duplicate as visited
            }
        }
        if(count==1){
            printf("%d",arr[i]);
        }
            
        }
       
    

    return 0;
}
