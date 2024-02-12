#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

int n;
int** graph;
int** visited;
int* result;
int resultIndex = 0;

int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };

void dfs(int y, int x) {
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (0 <= ny && ny < n && 0 <= nx && nx < n) {
            if (graph[ny][nx] == 1 && visited[ny][nx] == 0) {
                result[resultIndex - 1]++;
                dfs(ny, nx);
            }
        }
    }
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    scanf("%d", &n);

    graph = (int**)malloc(n * sizeof(int*));
    visited = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        graph[i] = (int*)malloc(n * sizeof(int));
        visited[i] = (int*)calloc(n, sizeof(int));
        for (int j = 0; j < n; j++) {
            scanf("%1d", &graph[i][j]);
        }
    }

    result = (int*)malloc(n * n * sizeof(int));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (graph[i][j] == 1 && visited[i][j] == 0) {
                result[resultIndex++] = 1;
                dfs(i, j);
            }
        }
    }

    qsort(result, resultIndex, sizeof(int), compare);

    printf("%d\n", resultIndex);
    for (int i = 0; i < resultIndex; i++) {
        printf("%d\n", result[i]);
    }

    for (int i = 0; i < n; i++) {
        free(graph[i]);
        free(visited[i]);
    }
    free(graph);
    free(visited);
    free(result);

    return 0;
}