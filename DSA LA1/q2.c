#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int max = findMax(arr, n - 1);
    return (arr[n - 1] > max) ? arr[n - 1] : max;
}

int findMin(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int min = findMin(arr, n - 1);
    return (arr[n - 1] < min) ? arr[n - 1] : min;
}

int main() {
    int arr[100];
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Maximum element: %d\n", findMax(arr, size));
    printf("Minimum element: %d\n", findMin(arr, size));

    return 0;
}