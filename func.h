#ifndef FUNC_H
#define FUNC_H

#include <stdbool.h>

#define INF 99999 // Assuming no path will have a weight greater than this

bool isPath(int graph[10][10], int i, int j);

int shortestPath(int graph[10][10], int i, int j);
extern int dist[10][10];
#endif /* FUNC_H */
