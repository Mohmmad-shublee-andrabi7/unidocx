#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to display the list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Delete from beginning
struct Node* deleteBeginning(struct Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Delete from end
struct Node* deleteEnd(struct Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }
    if (head->next == NULL) { // only one node
        free(head);
        return NULL;
    }

    struct Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
    return head;
}

// Delete from given position (1-based index)
struct Node* deletePosition(struct Node* head, int pos) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }

    if (pos == 1) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) {
        printf("Position not found!\n");
        return head;
    }

    struct Node* del = temp->next;
    temp->next = del->next;
    free(del);
    return head;
}

int main() {
    struct Node* head = NULL;
    struct Node* n1 = malloc(sizeof(struct Node));
    struct Node* n2 = malloc(sizeof(struct Node));
    struct Node* n3 = malloc(sizeof(struct Node));

    n1->data = 10; n1->next = n2;
    n2->data = 20; n2->next = n3;
    n3->data = 30; n3->next = NULL;
    head = n1;

    printf("Original List: ");
    display(head);

    head = deleteBeginning(head);
    printf("After deleting beginning: ");
    display(head);

    head = deleteEnd(head);
    printf("After deleting end: ");
    display(head);

    head = deletePosition(head, 1);
    printf("After deleting position 1: ");
    display(head);

    return 0;
}






