#include <stdio.h>

int main() {
    int arr1[100], arr2[100], arr3[200];
    int size1, size2, size3;
    int i, j, k;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the elements of the first array in sorted order:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Enter the elements of the second array in sorted order:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        arr3[k++] = arr1[i++];
    }

    while (j < size2) {
        arr3[k++] = arr2[j++];
    }

    size3 = size1 + size2;

    printf("The merged sorted array is:\n");
    for (i = 0; i < size3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}