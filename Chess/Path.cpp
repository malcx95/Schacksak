//
// Created by malcolm on 1/12/16.
//

#include "Path.h"

PathNode::PathNode(int row, int col, PathNode *next) {
    this->row = row;
    this->col = col;
    this->next = next;
}
