#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// 
void reverse(struct Node *head) {
    if (head == NULL) 
        return;
    
    reverse(head->next);
    printf("%d ", head->data);
}

int main() {
    struct Node *head = NULL;
    struct Node *tail = NULL;
    struct Node *newNode;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        
        newNode = (struct Node*)malloc(sizeof(struct Node));
        if(newNode == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    printf("\nReverse Traversal: ");
    reverse(head);
    printf("\n");
    
    // free memory
    struct Node *current = head;
    struct Node *next;
    while(current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
