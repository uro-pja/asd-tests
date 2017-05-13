//
// Created by Arkadiusz Surma on 13/05/2017.
//

#include "Vertex.h"
#pragma once

Vertex::Vertex(int i) {
    index = i;
}

void Vertex::addNeighbour(Vertex *neighbour) {
    neighbours.push_back(neighbour);
}

std::vector<Vertex *> Vertex::getNeighbours() {
    return neighbours;
}
