#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int isSorted = 0;

    for (int i = 0; i < N -1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 1;
            break;
        }
    }

    if (isSorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}