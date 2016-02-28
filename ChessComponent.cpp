//
// Created by malcolm on 1/17/16.
//

#include "ChessComponent.h"

ChessComponent::ChessComponent(QWidget* parent) : QWidget(parent) {
    scene = new QGraphicsScene(0, 0, SCENE_HEIGHT, SCENE_HEIGHT);
    view = new QGraphicsView(scene);
    QVBoxLayout* layout = new QVBoxLayout;
    this->setLayout(layout);
    layout->insertWidget(0, view);
    drawChessSquares();
	this->selected = nullptr;
}

void ChessComponent::mousePressEvent(QMouseEvent* event) {
	setSelectedSquare(event->x(), event->y());
}

ChessComponent::~ChessComponent() {
    delete scene;
    delete view;
}

void ChessComponent::drawChessSquares() {
    const int squareWidth = SCENE_HEIGHT/CHESS_DIMENSION;
    bool light = false;
    for (int i = 0; i < CHESS_DIMENSION; ++i) {
        light = !light;
        for (int j = 0; j < CHESS_DIMENSION; ++j) {
            QGraphicsRectItem* square =
                    new QGraphicsRectItem(i * squareWidth,
                                            j * squareWidth,
                                                squareWidth,
                                                squareWidth);
            if (light) {
                square->setBrush(QBrush(QColor(242, 186, 94)));
            } else {
                square->setBrush(QBrush(QColor(0, 0, 0)));
            }
            light = !light;
            scene->addItem(square);
        }
    }
}

void ChessComponent::setSelectedSquare(int x, int y) {
	// TODO implement
}
