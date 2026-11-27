// write a C program to find the smallest number in an array input will be user input//
#include <stdio.h>

int main() {
    int n, i, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The smallest number in the array is: %d\n", min);

    return 0;
}

