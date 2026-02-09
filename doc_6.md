Question 6: Given the array of the data (unsorted), Write a program to build the min and max heap .

In this program , an unsorted array is taken as input from user and then both min heap and max heap is built from that array.

A heap is complete binary tree where parent node follows specific ordering property with its children . In min heap, parent is smaller than children and in max heap, parent is larger than children . The program uses array representation of heap.

Functions used in the programme are:

1. void heapifyMin(int arr[], int n, int i):

=> The function takes array, size and index as arguments . It compares parent node with left and right child to find smallest among them. If parent is not smallest, it swaps parent with smallest child and recursively calls heapifyMin for affected subtree . This way min heap property is maintained.


2. void heapifyMax(int arr[], int n, int i):

=> The function takes array, size and index as arguments . It compares parent node with left and right child to find largest among them. If parent is not largest, it swaps parent with largest child and recursively calls heapifyMax for affected subtree . This way max heap property gets maintained.


Main():
The main function does following tasks:
-takes number of elements as input from user,
-checks if input is valid or not (between 1 to 100),
-takes array elements as input from user,
-copies original array to minHeap array for building min heap,
-copies original array to maxHeap array for building max heap,
-builds min heap by calling heapifyMin starting from last non-leaf node and going backwards,
-prints the min heap array,
-builds max heap by calling heapifyMax starting from last non-leaf node and going backwards,
-prints the max heap array.


let us suppose input is :
Enter number of elements: 6
Enter 6 elements:
12 11 13 5 6 7

the output is:
Min Heap: 5 6 7 12 11 13 

Max Heap: 13 12 7 5 6 11

Output screenshot:
Output screenshot is :
![Output of Question 6][def]

[def]: images/output_6.png
