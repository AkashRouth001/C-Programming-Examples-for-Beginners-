#include <stdio.h>

void rearrange_array(int arr[], int n) {
    int result[n];
    int i;

    // Initialize result array with -1
    for (i = 0; i < n; i++) {
        result[i] = -1;
    }

    // Fill result array with elements from input array
    for (i = 0; i < n; i++) {
        if (arr[i] != -1) {
            result[arr[i]] = arr[i];
        }
    }

    // Print the result array
    printf("[");
    for (i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array (-1 for missing elements):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rearrange_array(arr, n);

    return 0;
}
