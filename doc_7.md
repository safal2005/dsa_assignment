Question 7: Given a weighted graph, implement Dijkstra's algorithm to find the shortest path from a source node to all other nodes .

In this program , Dijkstra's algorithm is implemented to find shortest path from source vertex to all other vertices in weighted graph.

Dijkstra's algorithm is greedy algorithm that finds shortest path from source to all vertices . It works by selecting vertex with minimum distance that hasn't been visited yet, then updating distances of its adjacent vertices . The program uses adjacency matrix to represent weighted graph.

Functions used in the programme are:

1. int findMinVertex(int distance[], int visited[]):

=> The function takes distance array and visited array as arguments . It finds and returns the vertex which has minimum distance value among all unvisited vertices. This vertex is selected for processing in next iteration of algorithm.


2. void dijkstra(int source):

=> The function takes source vertex as argument . It initializes distance array with INF and visited array with 0. Then it sets distance of source to 0 . After that it runs loop for n-1 times, in each iteration it finds minimum distance vertex, marks it visited, and updates distances of all adjacent unvisited vertices if shorter path is found through current vertex.


Main():
The main function does following tasks:
-takes number of vertices as input from user,
-validates if input is valid or not,
-takes adjacency matrix as input where user enters weight of edges (0 means no edge),
-asks user for source vertex,
-validates source vertex,
-calls dijkstra function with source vertex,
-dijkstra function prints shortest distance from source to all vertices in table format.


let us suppose input is :
Enter number of vertices: 5
Enter the adjacency matrix (use 0 for no edge):
0 10 0 30 100
10 0 50 0 0
0 50 0 20 10
30 0 20 0 60
100 0 10 60 0
Enter source vertex (0 to 4): 0

the output is:
Vertex		Distance from Source (0)
0		0
1		10
2		60
3		30
4		70



Output screenshot is :
![Output of Question 7][def]

[def]: images/output_7.png

