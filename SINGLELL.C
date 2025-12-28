#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

/* ----- CREATE NODE ----- */
struct Node* create(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    return temp;
}

/* ----- INSERT BEGIN ----- */
void insertBegin(int x) {
    struct Node* temp = create(x);
    temp->next = head;
    head = temp;
}

/* ----- INSERT END ----- */
void insertEnd(int x) {
    struct Node* temp = create(x);
    if(head == NULL) {
        head = temp;
        return;
    }
    struct Node* p = head;
    while(p->next != NULL)
        p = p->next;
    p->next = temp;
}

/* ----- DELETE BEGIN ----- */
void deleteBegin() {
    if(head == NULL) return;
    struct Node* temp = head;
    head = head->next;
    free(temp);
}

/* ----- DELETE END ----- */
void deleteEnd() {
    if(head == NULL) return;
    if(head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct Node* p = head;
    while(p->next->next != NULL)
        p = p->next;
    free(p->next);
    p->next = NULL;
}

/* ----- DISPLAY ----- */
void display() {
    struct Node* p = head;
    while(p != NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertBegin(5);
    display();

    deleteBegin();
    display();

    deleteEnd();
    display();

    return 0;
}
