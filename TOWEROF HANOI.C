#include <stdio.h>

void toh(int n, char from, char to, char aux) {
    if(n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }

    toh(n-1, from, aux, to);              // Step 1
    printf("Move disk %d from %c to %c\n", n, from, to); // Step 2
    toh(n-1, aux, to, from);              // Step 3
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    toh(n, 'A', 'C', 'B');

    return 0;
}
