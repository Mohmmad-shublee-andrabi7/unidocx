#include <stdio.h>

// Recursive function to shift elements left
void shiftLeft(int arr[], int n, int pos) {
    if (pos >= n - 1)
        return;
    arr[pos] = arr[pos + 1];
    shiftLeft(arr, n, pos + 1);
}

int main() {
    int arr[100], n, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (0 for beginning, %d for end): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 0;
    }

    shiftLeft(arr, n, pos);  // shift elements left from position
    n--;

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}