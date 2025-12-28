#include <stdio.h>

void bucketSort(float a[], int n) {
    float b[10][10];
    int count[10] = {0};

    for(int i = 0; i < n; i++) {
        int idx = a[i] * 10;
        b[idx][count[idx]++] = a[i];
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 1; j < count[i]; j++) {
            float key = b[i][j];
            int k = j - 1;
            while(k >= 0 && b[i][k] > key) {
                b[i][k+1] = b[i][k];
                k--;
            }
            b[i][k+1] = key;
        }
    }

    int index = 0;
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < count[i]; j++)
            a[index++] = b[i][j];
}

int main() {
    float a[] = {0.42, 0.32, 0.23, 0.52, 0.25};
    int n = 5;

    bucketSort(a, n);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%.2f ", a[i]);

    return 0;
}
