How can we implement the undirected graph using the adjacency matrix?

An undirected graph can be implemented using adjacency matrix by creating a 2D array where rows and columns represent vertices of graph . If there is an edge between vertex i and vertex j, then we put 1 at position [i][j] and [j][i] both, otherwise we put 0 .

For example if we have edge between vertex 0 and vertex 1, then:
adj[0][1] = 1
adj[1][0] = 1

Since the graph is undirected, the adjacency matrix becomes symmetric matrix . This means if there is edge from A to B, there is also edge from B to A automatically .


Question 5: Program to implement DFS and BFS traversal on graph using adjacency matrix .

In this program , an undirected graph is represented using adjacency matrix and then DFS (Depth First Search) and BFS (Breadth First Search) traversal is performed on the graph.

DFS uses recursion to go deep into graph first before backtracking, while BFS uses queue to visit all neighbors at current level before moving to next level .

Functions used in the programme are:

1. void dfs(int vertex):

=> The function takes vertex number as argument . It marks current vertex as visited and prints it, then recursively calls itself for all adjacent unvisited vertices . This way it goes deep into graph first.


2. void bfs(int start):

=> The function takes starting vertex as argument . It uses queue data structure to visit vertices level by level. First it adds starting vertex to queue, then keeps removing vertices from front and adding their unvisited neighbors to rear until queue becomes empty.


Main():
The main function does following tasks:
-takes number of vertices as input from user,
-validates if input is valid (between 1 to 10),
-takes adjacency matrix as input where user enters 0 or 1 for each edge,
-asks user for starting vertex,
-validates starting vertex,
-initializes visited array to 0 for DFS,
-performs DFS traversal starting from given vertex,
-performs BFS traversal starting from same vertex,
-displays both traversal results.


let us suppose input is :
Enter number of vertices: 4
Enter adjacency matrix (0 or 1):
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0
Enter starting vertex (0 to 3): 0

the output is:
DFS Traversal: 0 1 3 2 

BFS Traversal: 0 1 2 3

Output screenshot:
Output screenshot is :
![Output of Question 5][def]

[def]: images/output_5.png
