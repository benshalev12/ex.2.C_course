#include <stdio.h>
#include "func.h"

int main() {
    

    int graph[10][10];
    printf("Enter the adjacency matrix for the graph :\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    int start, end;
    printf("Enter the start and end vertices to check for path: ");
    scanf("%d %d", &start, &end);

    bool ans= isPath(graph,start,end);
        printf("%d\n", ans);
   
    
 int shortest_path = shortestPath(graph, start, end);
    if (shortest_path != INF) {
        printf("Shortest path between %d and %d is: %d\n", start, end, shortest_path);
    } else {
        printf("-1 :\n");
    }
    return 0;
}
