//
// Created by Arkadiusz Surma on 13/05/2017.
//

#include "Graph.h"

int Graph::size() {
    return (int) children.size();
}

Graph::Graph(std::vector<std::vector<int>> vector) {
    for (int i = 0; i < vector.size(); i++) {
        Vertex *child = new Vertex(i);
        children.push_back(child);
    }
    int i = 0;
    for (std::vector<int> elem : vector) {
        for (int idx : elem) {
            children.at((unsigned long) i)->addNeighbour(children.at((unsigned long) idx));
        }
        i++;
    }
}

Vertex *Graph::get(int i) {
    return children.at((unsigned long) i);
}
