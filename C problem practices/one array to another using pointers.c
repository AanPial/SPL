#include <stdio.h>

int main() {
    int arr[100];
    int dest[100];
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    int *ptr = arr;

    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Source Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    int *destPtr = dest;

    for (i = 0; i < n; i++) {
        *(destPtr + i) = *(ptr + i);
    }

    printf("Destination Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(destPtr + i));
    }
    printf("\n");

    return 0;
}

