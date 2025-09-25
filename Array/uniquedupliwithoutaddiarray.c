#include <stdio.h>

int main() {
    int arr[20] = {1, 2, -1, 3, 4, -1, -2, -1,4};
    int n = 9;
    int i, j;
    int count;

    for (i = 0; i < n; i++) {
        count = 0;

        // Skip if we already handled this value earlier
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                count = -1;   // mark as already counted
                break;
            }
        }
        if (count == -1) continue;

        // Count total occurrences of arr[i]
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Print only if it occurs more than once
        // if (count>1) {
            printf("%d\t occurs %d times\n", arr[i],count);
        // }
    }

    return 0;
}
