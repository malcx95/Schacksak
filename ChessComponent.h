//
// Created by malcolm on 1/17/16.
//

#ifndef CHESS_CHESSCOMPONENT_H
#define CHESS_CHESSCOMPONENT_H

#include <iostream>
#include <QtGui>
#include "constants.h"


class ChessComponent : public QWidget {
    Q_OBJECT
public:
    ChessComponent(QWidget* parent = 0);
    ~ChessComponent();
private:	
	
    QGraphicsScene* scene;
    QGraphicsView* view;
	struct Square {
		int x;
		int y;
		Square(int x, int y){
			this->x = x;
			this->y = y;
		}
	};
	Square* selected;

	void setSelectedSquare(int x, int y);
	void mousePressEvent(QMouseEvent* event);
    void drawChessSquares();
};


#endif //CHESS_CHESSCOMPONENT_H
