Repository: https://github.com/Elzawawy/graph-algorithms

Documentation:-

graph.h
The repository contains a graph.h header file that defines the data structures for representing graphs. 
It includes structures for vertices, edges, and the graph itself.

GraphEdge.cpp-
Constructor (GraphEdge::GraphEdge):
The constructor initializes a GraphEdge object with a specified weight and two nodes (Node1 and Node2).
It takes three parameters: weight (an integer) and pointers to GraphNode objects (Node1 and Node2).
The constructor assigns the input values to the corresponding member variables.
Equality Operator Overload (GraphEdge::operator==):
This function overloads the equality operator (==) for GraphEdge objects.
It compares two edges to check if they are equal (i.e., connecting the same nodes regardless of order).
The function checks all possible combinations of nodes (Node1 and Node2) and returns true if they match; otherwise, it returns false.
Accessor Functions (getWeight, getNode1, getNode2):
These functions allow access to the private members of the GraphEdge class:
getWeight() returns the weight of the edge.
getNode1() returns a pointer to the first node connected by the edge.
getNode2() returns a pointer to the second node connected by the edge.





main.cpp- demonstrates the use of two graph algorithms: Prim's algorithm for finding the Minimum Spanning Tree (MST) and Dijkstra's algorithm for finding the shortest paths from a source vertex. Here's a summary of its functionality:

Program Overview
Input and Initialization:

The user is prompted to enter the number of vertices for two separate graphs and their corresponding adjacency matrices.
The adjacency matrices are used to initialize two instances of the Graph class.
Prim's Algorithm:

Purpose: Computes the Minimum Spanning Tree (MST) of a graph.
Procedure:
The user provides the number of vertices and the adjacency matrix of the graph.
The Graph object is instantiated using the adjacency matrix.
Prim's algorithm is executed starting from a predefined vertex (randomVertix), which is set to 0.
The resulting MST edges and their weights are printed.
The total weight of the MST is calculated and displayed.
Dijkstra's Algorithm:

Purpose: Finds the shortest paths from a source vertex to all other vertices in the graph.
Procedure:
The user provides the number of vertices and the adjacency matrix for a second graph.
A new Graph object is instantiated with this adjacency matrix.
The user specifies the source vertex index for the shortest path calculation.
Dijkstra's algorithm is executed, and the results (shortest paths and distances) are printed.
Key Points
Graph Class: The Graph class is used to manage the graph representation and algorithms. It should include methods for:

Prim's algorithm (primAlgorithm), which returns a vector of GraphEdge objects representing the MST.
Dijkstra's algorithm (dijkstraAlgorithm), which calculates and prints shortest paths from a source vertex.
Memory Management: After using primAlgorithm, the dynamically allocated memory for the vector of edges is freed using delete.

User Interaction: The program expects input for the number of vertices and adjacency matrices, and prompts for the source vertex in the case of Dijkstra's algorithm.
