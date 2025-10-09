#include <stdio.h>



int arr[50];
int n = 0;  // current number of elements

void insertAtBeginning(int value) {
    if (n == 50) {
        printf("Array is full!\n");
        return;
    }
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = value;
    n++;
}

void insertAtEnd(int value) {
    if (n == 50) {
        printf("Array is full!\n");
        return;
    }
    arr[n] = value;
    n++;
}

void insertAtPosition(int pos, int value) {
    if (n == 50) {
        printf("Array is full!\n");
        return;
    }
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;
}

void deleteFromBeginning() {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void deleteFromEnd() {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    n--;
}

void deleteFromPosition(int pos) {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void display() {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int choice, value, pos;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Position\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertAtBeginning(value);
            break;
        case 2:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertAtEnd(value);
            break;
        case 3:
            printf("Enter position and value: ");
            scanf("%d %d", &pos, &value);
            insertAtPosition(pos, value);
            break;
        case 4:
            deleteFromBeginning();
            break;
        case 5:
            deleteFromEnd();
            break;
        case 6:
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            deleteFromPosition(pos);
            break;
        case 7:
            display();
            break;
        case 8:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
