#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Display the list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
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
    if (head != NULL)
        head->prev = NULL;
    free(temp);
    return head;
}

// Delete from end
struct Node* deleteEnd(struct Node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    if (temp->prev != NULL)
        temp->prev->next = NULL;
    else
        head = NULL; // only one node

    free(temp);
    return head;
}

// Delete from any position (1-based index)
struct Node* deletePosition(struct Node* head, int pos) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }

    struct Node* temp = head;
    for (int i = 1; temp != NULL && i < pos; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Position not found!\n");
        return head;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    return head;
}

int main() {
    struct Node* head = NULL;
    struct Node* n1 = malloc(sizeof(struct Node));
    struct Node* n2 = malloc(sizeof(struct Node));
    struct Node* n3 = malloc(sizeof(struct Node));

    n1->data = 10; n1->prev = NULL; n1->next = n2;
    n2->data = 20; n2->prev = n1; n2->next = n3;
    n3->data = 30; n3->prev = n2; n3->next = NULL;
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
