//
// Created by malcolm on 1/17/16.
//

#ifndef CHESS_CHESSCOMPONENT_H
#define CHESS_CHESSCOMPONENT_H

#include <QtGui>

class ChessComponent : public QWidget {
    Q_OBJECT
public:
    ChessComponent(QWidget* parent = 0);
    ~ChessComponent();
private:
    QGraphicsScene* scene;
    QGraphicsView* view;
    void drawChessSquares();
};


#endif //CHESS_CHESSCOMPONENT_H
