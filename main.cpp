#include <iostream>
#include "ExpressionValue.h"
#include "DFS.h"

int main() {

//    ExpressionValue("((0+1)*((6*(7+8))*3))");

    std::vector<std::vector<int>> in = {
            {1, 3, 4, 7},
            {0, 2, 3, 4, 5, 6},
            {1, 7},
            {0, 1, 5, 6, 7},
            {0, 1, 5},
            {1, 3, 4, 6},
            {1, 3, 5},
            {0, 2, 3}
    };

    Graph *graph = new Graph(in);
    Vertex *vertex = graph->get(7);
    std::vector<Vertex *> L = DFS(graph, vertex);
    for (Vertex *elem: L) {

    }

    return 0;
}