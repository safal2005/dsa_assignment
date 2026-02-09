#include <stdio.h>
#include <limits.h>

#define INF 9999
#define MAX 10

int n;
int graph[MAX][MAX];

// function to find vertex with minimum distance
int findMinVertex(int distance[], int visited[]) {
    int minVertex = -1;
    int i;
    
    for(i = 0; i < n; i++) {
        if(visited[i] == 0 && (minVertex == -1 || distance[i] < distance[minVertex])) {
            minVertex = i;
        }
    }
    
    return minVertex;
}

// dijkstra algorithm implementation
void dijkstra(int source) {
    int distance[MAX];
    int visited[MAX];
    int i, j;
    
    // initialize distances and visited array
    for(i = 0; i < n; i++) {
        distance[i] = INF;
        visited[i] = 0;
    }
    
    distance[source] = 0;
    
    // find shortest path for all vertices
    for(i = 0; i < n - 1; i++) {
        int minVertex = findMinVertex(distance, visited);
        visited[minVertex] = 1;
        
        // update distance of adjacent vertices
        for(j = 0; j < n; j++) {
            if(graph[minVertex][j] != 0 && visited[j] == 0) {
                int newDist = distance[minVertex] + graph[minVertex][j];
                if(newDist < distance[j]) {
                    distance[j] = newDist;
                }
            }
        }
    }
    
    // print the shortest distances
    printf("\nVertex\t\tDistance from Source (%d)\n", source);
    for(i = 0; i < n; i++) {
        printf("%d\t\t", i);
        if(distance[i] == INF) {
            printf("INF\n");
        }
        else {
            printf("%d\n", distance[i]);
        }
    }
}

int main() {
    int source;
    int i, j;
    
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    
    if(n <= 0 || n > MAX) {
        printf("Invalid number of vertices!\n");
        return 1;
    }
    
    printf("Enter the adjacency matrix (use 0 for no edge):\n");
    printf("Note: Enter weight of edge, 0 means no direct edge\n");
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    
    printf("\nEnter source vertex (0 to %d): ", n-1);
    scanf("%d", &source);
    
    if(source < 0 || source >= n) {
        printf("Invalid source vertex!\n");
        return 1;
    }
    
    dijkstra(source);
    
    return 0;
}
