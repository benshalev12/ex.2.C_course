#include <stdio.h>
#include "func.h"

int main() {
    

    int graph[10][10];
    printf("Enter the adjacency matrix for the graph use 1 if 2 vertices has edge else 0:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int start, end;
    printf("Enter the start and end vertices to check for path: ");
    scanf("%d %d", &start, &end);

    if (isPath(graph, start, end)) {
        printf("There is a path between %d and %d.\n", start, end);
    } else {
        printf("There is no path between %d and %d.\n", start, end);
    }
 int shortest_path = shortestPath(graph, start, end);
    if (shortest_path != INF) {
        printf("Shortest path between %d and %d is: %d\n", start, end, shortest_path);
    } else {
        printf("No path between %d and %d.\n", start, end);
    }
    return 0;
}
