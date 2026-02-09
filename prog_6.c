#include <stdio.h>

// heapify function for min heap
void heapifyMin(int arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    // if left child is smaller than root
    if(left < n && arr[left] < arr[smallest]) {
        smallest = left;
    }
    
    // if right child is smaller
    if(right < n && arr[right] < arr[smallest]) {
        smallest = right;
    }
    
    // swap if needed and heapify again
    if(smallest != i) {
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
        
        heapifyMin(arr, n, smallest);
    }
}

// heapify function for max heap
void heapifyMax(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    
    // if left child is larger than root
    if(left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    
    // if right child is larger
    if(right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    
    // swap if needed and heapify again
    if(largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        
        heapifyMax(arr, n, largest);
    }
}

int main() {
    int arr[100], n;
    int minHeap[100], maxHeap[100];
    int i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    if(n <= 0 || n > 100) {
        printf("Invalid input!\n");
        return 1;
    }
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // copying original array to minHeap
    for(i = 0; i < n; i++) {
        minHeap[i] = arr[i];
    }
    
    // copying original array to maxHeap
    for(i = 0; i < n; i++) {
        maxHeap[i] = arr[i];
    }
    
    // building min heap - start from last non leaf node
    for(i = n/2 - 1; i >= 0; i--) {
        heapifyMin(minHeap, n, i);
    }
    
    printf("\nMin Heap: ");
    for(i = 0; i < n; i++) {
        printf("%d ", minHeap[i]);
    }
    printf("\n");
    
    // building max heap - start from last non leaf node
    for(i = n/2 - 1; i >= 0; i--) {
        heapifyMax(maxHeap, n, i);
    }
    
    printf("\nMax Heap: ");
    for(i = 0; i < n; i++) {
        printf("%d ", maxHeap[i]);
    }
    printf("\n");
    
    return 0;
}
