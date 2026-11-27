// write a C program to find the largest number in an array input will be user input//
#include<stdio.h>
int main()
int n,i,arr[100],max;
printf("enter the size of array:");#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 91, 23, 64};
    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    // Assume the first element is the largest
    int max = arr[0]; 

    // Loop through the array starting from the second element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }

    printf("The largest number in the array is: %d\n", max);

    return 0;
}

scanf("%d",&n);
printf("")


