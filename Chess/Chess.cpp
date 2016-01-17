#include <iostream>
#include <QApplication>
#include <QTextEdit>
#include <qmainwindow.h>
#include <qabstractfontengine_qws.h>
#include "EventHandlers.h"
#include "ChessWindow.h"

using namespace std;

int main(int argc, char** argv) {
    cout << "HEJHEJ" << endl;
    QApplication app(argc, argv);
    ChessWindow window;
    window.show();
    return app.exec();
}










