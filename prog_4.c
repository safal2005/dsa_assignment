#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};


struct Node* insertAfter(struct Node *head, int key, int value) {// insert new node after a specific key value
    struct Node *temp = head;
    
    
    while(temp != NULL && temp->data != key) {// find the node with key
        temp = temp->next;
    }
    
    if(temp == NULL) {
        printf("Key not found\n");
        return head;
    }
    
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = temp->next;
    newNode->prev = temp;
    
    if(temp->next != NULL)
        temp->next->prev = newNode;
    
    temp->next = newNode;
    
    return head;
}


struct Node* deleteNode(struct Node *head, int key) {// delete node with given key
    struct Node *temp = head;
    
    while(temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    
    if(temp == NULL) {
        printf("Node not found\n");
        return head;
    }
    
    
    if(temp->prev != NULL) {// if node to be deleted is head
        temp->prev->next = temp->next;
    }
    else {
        head = temp->next;
    }
    
    if(temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    
    free(temp);
    return head;
}


void display(struct Node *head) {// display the list
    struct Node *ptr = head;
    printf("List: ");
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main() {
    struct Node *head = NULL;
    struct Node *temp, *newNode;
    int n, value, key, insertVal, deleteVal;
    
    printf("Enter number of initial nodes: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("Invalid input\n");
        return 1;
    }
    
    printf("Enter values for nodes:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &value);
        
        newNode = (struct Node*)malloc(sizeof(struct Node));
        if(newNode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;
        
        if(head == NULL) {
            head = newNode;
            temp = head;
        }
        else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
    
    printf("\nInitial ");
    display(head);
    
    // insert operation
    printf("\nEnter the key after which to insert: ");
    scanf("%d", &key);
    printf("Enter value to insert: ");
    scanf("%d", &insertVal);
    
    head = insertAfter(head, key, insertVal);
    printf("After insertion: ");
    display(head);
    
    // delete operation
    printf("\nEnter value to delete: ");
    scanf("%d", &deleteVal);
    
    head = deleteNode(head, deleteVal);
    printf("After deletion: ");
    display(head);
    
    return 0;
}
