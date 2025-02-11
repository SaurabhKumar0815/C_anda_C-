#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    // Traverse the array
    for (int i = 0; i < size; i++) {
        // If element is found
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main() {
    int arr[] = {12, 34, 53, 24, 76, 89};  // Example array
    int target, size;

    // Determine the size of the array
    size = sizeof(arr) / sizeof(arr[0]);

    // Take input for the target element
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Perform linear search
    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
