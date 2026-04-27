#include <stdio.h>
    for (int count = 0; count < vertices - 1; count++) {
        
        int u = minKey(key, mstSet, vertices);
        mstSet[u] = true;
for (int v = 0; v < vertices; v++) {
           
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
	}
    printTree(parent, graph, vertices);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

int main() {
    int vertices;
    int graph[V][V];

    printf("No of vertices: ");
    scanf("%d", &vertices);

    printf("Adjacency matrix elements (row wise):\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    prim(graph, vertices);

    return 0;
}
