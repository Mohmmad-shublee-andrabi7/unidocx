#include <stdio.h>

// Recursive function to display array
void traverse(int arr[], int n, int i) {
    if (i == n) return;  // base case: end of array
    printf("%d ", arr[i]);
    traverse(arr, n, i + 1); // recursive call
}

int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements: ");
    traverse(arr, n, 0);  // start from index 0
    printf("\n");

    return 0;
}