#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparisons = 0;
int swaps = 0;

// print array
void printArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            comparisons++;
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }
    }
}

// selection sort
void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
    
    for(i = 0; i < n-1; i++) {
        minIdx = i;
        for(j = i+1; j < n; j++) {
            comparisons++;
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        
        // swap if needed
        if(minIdx != i) {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
            swaps++;
        }
    }
}

// insertion sort
void insertionSort(int arr[], int n) {
    int i, j, key;
    
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
        while(j >= 0) {
            comparisons++;
            if(arr[j] > key) {
                arr[j+1] = arr[j];
                j--;
                swaps++;
            }
            else {
                break;
            }
        }
        arr[j+1] = key;
    }
}

// merge function
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int L[1000], R[1000];
    
    // copy to temp arrays
    for(i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for(j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }
    
    // merge back
    i = 0;
    j = 0;
    k = left;
    
    while(i < n1 && j < n2) {
        comparisons++;
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        swaps++;
        k++;
    }
    
    // copy remaining
    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
        swaps++;
    }
    
    while(j < n2) {
        arr[k] = R[j];
        j++;
        k++;
        swaps++;
    }
}

// merge sort
void mergeSort(int arr[], int left, int right) {
    if(left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int n, choice;
    int i;
    
    srand(time(0));
    
    printf("Enter the value of N (number of random integers): ");
    scanf("%d", &n);
    
    if(n <= 0 || n > 1000) {
        printf("Invalid input! N should be between 1 and 1000\n");
        return 1;
    }
    
    int arr[1000];
    
    // generate random numbers between 1 to 1000
    printf("\nGenerating %d random integers in range [1, 1000]...\n", n);
    for(i = 0; i < n; i++) {
        arr[i] = (rand() % 1000) + 1;
    }
    
    // (c) print before sorting
    printf("\nNumbers before sorting:\n");
    printArray(arr, n);
    
    // (a) ask user to choose algorithm
    printf("\nChoose a sorting algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    comparisons = 0;
    swaps = 0;
    
    // (b) sort using chosen algorithm
    switch(choice) {
        case 1:
            printf("\nSorting using Bubble Sort...\n");
            bubbleSort(arr, n);
            break;
            
        case 2:
            printf("\nSorting using Selection Sort...\n");
            selectionSort(arr, n);
            break;
            
        case 3:
            printf("\nSorting using Insertion Sort...\n");
            insertionSort(arr, n);
            break;
            
        case 4:
            printf("\nSorting using Merge Sort...\n");
            mergeSort(arr, 0, n-1);
            break;
            
        default:
            printf("Invalid choice!\n");
            return 1;
    }
    
    // (c) print after sorting
    printf("\nNumbers after sorting:\n");
    printArray(arr, n);
    
    // (d) display comparisons and swaps
    printf("\nTotal number of comparisons: %d\n", comparisons);
    printf("Total number of swaps: %d\n", swaps);
    
    return 0;
}
