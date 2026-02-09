#include <stdio.h>

int n;
int adj[10][10];
int visited[10];

void dfs(int v) {
    printf("%d ", v);
    visited[v] = 1;

    for (int i = 0; i < n; i++)
        if (adj[v][i] && !visited[i])
            dfs(i);
}

void bfs(int start) {
    int q[10], front = 0, rear = 0;
    for (int i = 0; i < n; i++) visited[i] = 0;

    q[rear++] = start;
    visited[start] = 1;

    while (front < rear) {
        int v = q[front++];
        printf("%d ", v);

        for (int i = 0; i < n; i++)
            if (adj[v][i] && !visited[i]) {
                visited[i] = 1;
                q[rear++] = i;
            }
    }
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    printf("DFS: ");
    dfs(0);

    printf("\nBFS: ");
    bfs(0);
    return 0;
}
