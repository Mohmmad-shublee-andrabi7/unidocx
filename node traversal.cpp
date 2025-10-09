
#include <stdio.h>

struct Node {
    int data;
    int next;
};

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct Node nodes[n];

    int head = 0;
    for (int i = 0; i < n; i++) {
        nodes[i].next = (i == n - 1) ? -1 : i + 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &nodes[i].data);
    }

    printf("\nNode List:\n");
    int current = head;
    int count = 0;
    while (current != -1) {
        printf("Data: %d\n", nodes[current].data);
        current = nodes[current].next;
        count++;
    }

    printf("\nTotal number of nodes: %d\n", count);

    return 0;
}

