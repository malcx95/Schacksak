//
// Created by malcolm on 1/16/16.
//

#include <QtGui>
#include <iostream>

#ifndef CHESS_EVENTHANDLERS_H
#define CHESS_EVENTHANDLERS_H

class ShitEvent : public QObject {
    Q_OBJECT
public slots:
    void hej(QTextEdit* edit) {
        edit->append("hej ");
    }
};

class AnotherShitEvent : public QObject {
    Q_OBJECT
public slots:
    void shit() {
        std::cout << "shit...shitSHITSH" << std::endl;
    }
};

#endif //CHESS_EVENTHANDLERS_H
