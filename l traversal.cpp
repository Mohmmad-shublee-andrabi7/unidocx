#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    int next;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Variable Length Array (VLA)
    struct Student students[n];

    int head = 0;
    for (int i = 0; i < n; i++) {
        students[i].next = (i == n - 1) ? -1 : i + 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].rollNo);

        printf("Enter name for student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name);
    }

    printf("\nStudent List:\n");
    int current = head;
    while (current != -1) {
        printf("Roll No: %d, Name: %s\n", students[current].rollNo, students[current].name);
        current = students[current].next;
    }

    return 0;
}

