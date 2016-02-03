//
// Created by malcolm on 12/22/15.
//

#ifndef CHESS_PATH_H
#define CHESS_PATH_H
struct PathNode {
    int row;
    int col;
    PathNode* next;

    PathNode(int row, int col, PathNode* next = nullptr);


};
#endif //CHESS_PATH_H
