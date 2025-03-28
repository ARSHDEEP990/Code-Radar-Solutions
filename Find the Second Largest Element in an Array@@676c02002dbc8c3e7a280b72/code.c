#include <stdio.h>
#include <limits.h>

int main() {
    int size;

    scanf("%d", &size);

    if (size < 2) {

        return -1;
    }

    int arr[size];

    // Input the array
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];  // Set max to the first element instead of INT_MIN
    int smax = INT_MIN; // Still initialized to INT_MIN

    // Find max and second max in one pass
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            smax = max; // Store previous max as second max
            max = arr[i];
        } else if (arr[i] > smax && arr[i] < max) {
            smax = arr[i];
        }
    }

    // If smax is still INT_MIN or unchanged from max, no second max exists
    
    printf("%d", smax);

    return 0;
}