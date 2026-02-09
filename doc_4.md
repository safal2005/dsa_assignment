Qn4=>How can we implement the doubly linked list using structure?

A doubly linked list can be implemented using structure in C by defining a node structure that contains three parts: data field to store value, a pointer to previous node, and a pointer to next node .

The structure looks like:

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};


This allows traversal in both directions - forward and backward . Each node is connected to both its previous and next node, making insertion and deletion operations more flexible compared to singly linked list.


Question 4: Program to implement doubly linked list with insertion and deletion operations .

In this program , a doubly linked list is created by taking input from user and then performs insertion after a specific key and deletion of a node with given value.

A doubly linked list is a data structure where each node contains data, a pointer to previous node and pointer to next node . The program uses dynamic memory allocation to create nodes.

Functions used in the programme are:

1. struct Node* insertAfter(struct Node *head, int key, int value):

=> The function takes pointer to head node, key value and new value as arguments . It searches for the node with given key value, then inserts new node after that node. If key is not found it prints error message and returns head.


2. struct Node* deleteNode(struct Node *head, int key):

=> The function takes pointer to head and key value as arguments . It searches for node with given key and deletes that node from list. It handles cases when node to be deleted is head node or middle node or last node properly.


3. void display(struct Node *head):

=> The function takes pointer to head as argument . It traverses through entire list and prints all the values present in list.


Main():
The main function does following tasks:
-takes number of initial nodes as input from user,
-validates if input is valid,
-creates nodes dynamically using malloc and stores user entered values,
-links all nodes together to form doubly linked list,
-displays initial list,
-asks user for key after which to insert and value to insert,
-performs insertion and displays updated list,
-asks user for value to delete,
-performs deletion and displays final list.


let us suppose input is :
Enter number of initial nodes: 3
Enter values for nodes:
10 20 30
Enter the key after which to insert: 10
Enter value to insert: 15
Enter value to delete: 20

the output is:
Initial List: 10 20 30 
After insertion: List: 10 15 20 30 
After deletion: List: 10 15 30

Output screenshot is :
![Output of Question 4][def]

[def]: images/output_4.png
