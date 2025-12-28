#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

/* ---------- PUSH ---------- */
void push(int value) {
    if(top == MAX - 1) {
        printf("Stack Overflow\n");
    }
    else {
        top++;
        stack[top] = value;
        printf("%d pushed\n", value);
    }
}

/* ---------- POP ---------- */
void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
    }
    else {
        printf("%d popped\n", stack[top]);
        top--;
    }
}

/* ---------- DISPLAY ---------- */
void display() {
    if(top == -1) {
        printf("Stack is empty\n");
    }
    else {
        printf("Stack: ");
        for(int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

/* ---------- MAIN ---------- */
int main() {

    push(10);
    push(20);
    push(30);

    display();

    pop();
    display();

    return 0;
}
