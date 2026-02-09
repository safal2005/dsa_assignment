Question 8: Write a program that generates a list of N random integers in the range [1, 1000], where N is provided by the user at run time. Then, perform the following tasks:
(a) Ask the user to choose a sorting algorithm from the following:
• Bubble Sort
• Selection Sort
• Insertion Sort
• Merge Sort
(b) Sort the randomly generated numbers using the chosen algorithm.
(c) Print the numbers before and after sorting.
(d) Display the total number of comparisons and swaps (if applicable) performed by the chosen algorithm .

In this program , N random integers are generated in range [1, 1000] and then user can choose from 4 sorting algorithms to sort them. The program also counts and displays total comparisons and swaps done during sorting.

The program uses global variables to keep track of comparisons and swaps performed by sorting algorithms . Different sorting algorithms have different time complexity and number of operations.

Functions used in the programme are:

1. void printArray(int arr[], int n):

=> The function takes array and size as arguments . It simply prints all elements of array separated by space.


2. void bubbleSort(int arr[], int n):

=> The function takes array and size as arguments . It compares adjacent elements and swaps them if they are in wrong order. This process repeats for all elements. It counts comparisons and swaps during sorting.


3. void selectionSort(int arr[], int n):

=> The function takes array and size as arguments . It finds minimum element from unsorted part and swaps it with first element of unsorted part. This continues till array gets sorted. It counts comparisons and swaps.


4. void insertionSort(int arr[], int n):

=> The function takes array and size as arguments . It picks elements one by one and inserts them at correct position in sorted part of array. It counts comparisons and swaps performed.


5. void merge(int arr[], int left, int mid, int right):

=> The function takes array, left index, middle index and right index as arguments . It merges two sorted subarrays into single sorted array. It uses temporary arrays to store left and right parts then merges them back.


6. void mergeSort(int arr[], int left, int right):

=> The function takes array, left and right index as arguments . It divides array into two halves recursively, sorts them and then merges them using merge function.


Main():
The main function does following tasks:
-initializes random number generator using srand,
-takes N as input from user,
-validates if N is valid (between 1 to 1000),
-generates N random integers in range [1, 1000] using rand function,
-(c) prints array before sorting,
-(a) displays menu and asks user to choose sorting algorithm (1-4),
-resets comparison and swap counters to 0,
-(b) calls appropriate sorting function based on user choice using switch case,
-(c) prints array after sorting,
-(d) displays total number of comparisons and swaps performed.


let us suppose input is :
Enter the value of N (number of random integers): 4
Choose a sorting algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
Enter your choice (1-4): 2

the output is:
Generating 4 random integers in range [1, 1000]...

Numbers before sorting:
394 741 29 486

Sorting using Bubble Sort...

Numbers after sorting:
29 394 486 741

Total number of comparisons: 6
Total number of swaps: 3


Output screenshot is :
![Output of Question 8][def]

[def]: images/output_8.png
