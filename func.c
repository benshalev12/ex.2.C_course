#include "func.h"

bool visited[10];
int dist[10][10]; 


void DFS(int graph[10][10], int vertex) {
    visited[vertex] = true;
    for (int i = 0; i < 10; ++i) {
        if (graph[vertex][i] && !visited[i]) {
            DFS(graph, i);
        }
    }
}

bool isPath(int graph[10][10], int i, int j) {
    for (int k = 0; k < 10; ++k) {
        visited[k] = false;
    }

    DFS(graph, i);

    return visited[j];
}

int shortestPath(int graph[10][10], int i, int j) {
    for (int u = 0; u < 10; ++u) {
        for (int v = 0; v < 10; ++v) {
            dist[u][v] = graph[u][v];
        }
    }

    for (int k = 0; k < 10; ++k) {
        for (int u = 0; u < 10; ++u) {
            for (int v = 0; v < 10; ++v) {
                if (dist[u][k] != INF && dist[k][v] != INF && dist[u][k] + dist[k][v] < dist[u][v]) {
                    dist[u][v] = dist[u][k] + dist[k][v];
                }
            }
        }
    }

    return dist[i][j];
}