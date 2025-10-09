
#include <stdio.h>

void inputArray(int arr[], int size) {
    int i;
    printf("Enter elements: \n");
    for(i = 0; i < size; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
    }
}

int minimum(int arr[], int size) {
int min = arr[0];
for(int i=1;i<size;i++) {
    if(arr[i] < min) {
    min = arr[i];
    }
}
return min;
}

int maximum(int arr[], int size) {
int max = arr[0];
for(int i=1; i<size; i++) {
    if(arr[i] > max)
    max = arr[i];
}
return max;
}

int search(int arr[],int size,int key) {
    for(int i=0; i<size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
int size, i, key, result;
int arr[100];

printf("Enter size of array: ");
scanf("%d", &size);

inputArray(arr, size);


int min = minimum(arr, size);
int max = maximum(arr, size);

printf("Minimum is: %d\n", min);
printf("Maximum is : %d\n", max);


printf("Enter value to search: ");
scanf("%d", &key);

result = search(arr, size, key);

if(result == -1) {
    printf("Element not found\n");
}
else {
    printf("Element found at index %d\n", result);
}

return 0;
}
