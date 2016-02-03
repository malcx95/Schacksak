//
// Created by malcolm on 1/16/16.
//

#ifndef CHESS_GRID_H
#define CHESS_GRID_H

template <typename T>
class Grid {
public:
    Grid(int size);
    void add(T element, int posx, int posy);
    int getSize();
private:
};


#endif //CHESS_GRID_H
