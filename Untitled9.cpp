#include <stdio.h>


void deleteFromBeginning(int arr[], int *size) {
    for (int i = 0; i < *size - 1; i++)
        arr[i] = arr[i + 1];
    (*size)--;
}


void deleteFromEnd(int *size) {
    (*size)--;
}


void deleteFromPosition(int arr[], int *size, int pos) {
    if (pos < 0 || pos >= *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos; i < *size - 1; i++)
        arr[i] = arr[i + 1];
    (*size)--;
}


int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;

   

   
    deleteFromBeginning(arr, &size);
    display(arr, size); 

    
    deleteFromEnd(&size);
    display(arr, size); // 

   
    deleteFromPosition(arr, &size, 1);
    display(arr, size); 0000000

    return 0;
}
