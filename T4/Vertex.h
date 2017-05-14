#include <vector>
#pragma once

class Vertex {

    std::vector<Vertex *> neighbours;

public:
    Vertex(int i);

    Vertex *parent;
    int index;

    void addNeighbour(Vertex *neighbour);

    std::vector<Vertex *> getNeighbours();
};
