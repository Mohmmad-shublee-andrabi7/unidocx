#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* head = NULL;

struct Node* create(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->prev = temp->next = NULL;
    return temp;
}

void insertBegin(int x) {
    struct Node* temp = create(x);
    if(head != NULL)
        head->prev = temp;
    temp->next = head;
    head = temp;
}

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
    temp->prev = p;
}

void deleteBegin() {
    if(head == NULL) return;
    struct Node* temp = head;
    head = head->next;
    if(head != NULL) head->prev = NULL;
    free(temp);
}

void deleteEnd() {
    if(head == NULL) return;
    struct Node* p = head;
    while(p->next != NULL)
        p = p->next;
    if(p->prev != NULL)
        p->prev->next = NULL;
    else
        head = NULL;
    free(p);
}

void display() {
    struct Node* p = head;
    while(p != NULL) {
        printf("%d <-> ", p->data);
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
}
