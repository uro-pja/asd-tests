#include <vector>
#include <stack>
#include "Graph.h"
#include "Vertex.h"

#pragma once

int pushes = 0;
int popx = 0;
int maxStack = 0;
int currentStack = 0;

void push(std::stack<Vertex *> &S, Vertex *&s) {
    S.push(s);
    pushes++;
    currentStack++;
    if (currentStack > maxStack) maxStack = currentStack;
}

void pop(std::stack<Vertex *> &S) {
    S.pop();
    popx++;
    currentStack--;
}

std::vector<Vertex *> DFS(Graph *G, Vertex *s) {
    bool *checked = new bool[G->size()];
    std::fill(checked, checked + G->size(), false);

    std::stack<Vertex *> S;
    Vertex *tmp;
    s->parent = s;
    push(S, s);
    checked[s->index] = true;
    std::vector<Vertex *> L;
    while (!S.empty()) {
        tmp = S.top();
        printf("\nVertex: %d  --", tmp->index);
        pop(S);
        L.push_back(tmp);
        for (Vertex *neighbour: tmp->getNeighbours()) {
            if (!checked[neighbour->index]) {
                neighbour->parent = tmp;
                push(S, neighbour);
                checked[neighbour->index] = true;
                printf(" %d", neighbour->index);
            }
        }
    }
    printf("\nPushes: %d \nPops: %d \nMaxStack: %d", pushes, popx, maxStack);

    return L;
}