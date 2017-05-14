#include <vector>
#include "Vertex.h"
#pragma once

class Graph {

    std::vector<Vertex*> children;

public:
    Graph(std::vector<std::vector<int>> vector);

    int size();

    Vertex * get(int i);
};
