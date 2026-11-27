//W.A.C program to find the average number in an array//
#include<stdio.h>


int main() {
    int n, i;
    float sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf(" enter a positive number of elements.\n");
        return 1;
    }

    float numbers[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / n;

    printf("Average = %.2f\n", average);

    return 0;
}

