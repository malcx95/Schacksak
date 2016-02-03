//
// Created by malcolm on 1/16/16.
//

#ifndef CHESS_CHESSWINDOW_H
#define CHESS_CHESSWINDOW_H


#include <QtGui>
#include "ChessComponent.h"

class ChessWindow : public QMainWindow {
    Q_OBJECT
public:
    ChessWindow();
    ~ChessWindow();
private slots:
    void shit();
    void hej();
private:
    QWidget* mainPanel;
    ChessComponent* comp;
    QPushButton* button;
    //QTextEdit* textEdit;
    QAction* shitAction;
    QAction* quitAction;
    QMenu* fileMenu;
};


#endif //CHESS_CHESSWINDOW_H
