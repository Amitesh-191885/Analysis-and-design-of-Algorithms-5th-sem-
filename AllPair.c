#include<stdlib.h>
#include<stdio.h>
#define V 4  // number of vertex
#define INF 99999

// A function to print the solution matrix
void printSolution(int dist[][V]){
	for (int i = 0; i < V; i++){
		for (int j = 0; j < V; j++){
			if (dist[i][j] == INF){
        printf("%7s", "INF");
      }
			else{
        printf ("%7d", dist[i][j]);
      }
		}
		printf("\n");
	}
}

//all-pairs shortest path
//using Floyd Warshall algorithm
void floydWarshall (int graph[][V]){
	int dist[V][V], i, j, k;
	for (i = 0; i < V; i++){
		for (j = 0; j < V; j++){
			dist[i][j] = graph[i][j];
    }
  }

	for (k = 0; k < V; k++){
		for (i = 0; i < V; i++){
			for (j = 0; j < V; j++){
				// If vertex k is on the shortest path from
				// i to j, then update the value of dist[i][j]
				if (dist[i][k] + dist[k][j] < dist[i][j]){
          dist[i][j] = dist[i][k] + dist[k][j];
        }
			}
		}
	}

	// Print the shortest distance matrix
	printSolution(dist);
}

int main(){
  // Update the graph according to the given path.
  int graph[V][V] = { 
            {0, 4, 2, 6},
						{INF, 0, INF, 8},
						{INF, 1, 0, INF},
						{INF, INF, 2, 0}
					};

	// Print the solution
  printf("Before Shortest Path: \n");
  printSolution(graph);
  printf("After Shortest Path: \n");
	floydWarshall(graph);
	return 0;
}
