Question 3: Program to create a linked list and print it in reverse order using recursion .

In this program , a linked list is created by taking input from user and then the list is printed in reverse order using recursive function.

A linked list is a data structure where each node contains data and a pointer to next node . The program uses dynamic memory allocation to create nodes.

Functions used in the programme are:

1. void reversePrint(struct Node *head):

=> The function takes a pointer to head node as argument . It uses recursion to traverse till the end of list first, then prints the data while coming back. This way the list gets printed in reverse order without actually reversing the list.


Main():
The main function does following tasks:
-takes number of nodes as input from user,
-checks if input is valid or not,
-creates nodes dynamically using malloc and stores values entered by user,
-links all the nodes together to form linked list,
-calls reversePrint function to display list in reverse order,
-and frees the memory allocated to prevent memory leaks.


let us suppose input is :
Enter number of nodes: 5
Enter values:
10 20 30 40 50

the output is:
Reverse Traversal: 50 40 30 20 10

![Output of Question 3][def]

[def]: images/output_3.png

