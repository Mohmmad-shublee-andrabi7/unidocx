#include <stdio.h>

void insert(int arr[], int n, int pos, int val) {
    // Shift elements to right using recursion
    if (n >= pos) {
        arr[n + 1] = arr[n];
        insert(arr, n - 1, pos, val);
    } else {
        arr[pos] = val;
    }
}

int main() {
    int arr[100], n, val, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (0 for begin): ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    insert(arr, n - 1, pos, val);
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
