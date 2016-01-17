//
// Created by malcolm on 12/22/15.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H


#include "../PieceType.h"
#include "../Path.h"
#include "../Color.h"
#include <vector>
#include <string>

class Piece {
public:
    virtual ~Piece() = default;
    virtual PieceType getType() const = 0;
    virtual std::vector<PathNode*> getPossiblePaths() const = 0;
    virtual Piece* clone() const = 0;
    virtual std::string str() const = 0;
protected:
    PieceType type;
    Color color;
    Piece(Color color);
private:
};

#endif //CHESS_PIECE_H
