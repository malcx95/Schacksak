//
// Created by malcolm on 1/16/16.
//

#include <iostream>
#include "ChessWindow.h"
#include "EventHandlers.h"

ChessWindow::ChessWindow() {
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    shitAction = new QAction(tr("Shit!"), this);
    quitAction = new QAction(tr("Avsluta"), this);
    connect(shitAction, SIGNAL(triggered()), this, SLOT(shit()));
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(shitAction);
    fileMenu->addSeparator();
    fileMenu->addAction(quitAction);

    mainPanel = new QWidget;
    QVBoxLayout* layout = new QVBoxLayout;
    mainPanel->setLayout(layout);

    comp = new ChessComponent;
    //textEdit = new QTextEdit;
    button = new QPushButton("KLICKA HÄR!");
    //layout->addWidget(textEdit);
    layout->addWidget(comp);
    layout->addWidget(button);

    QObject::connect(button, SIGNAL(clicked()), this, SLOT(hej()));

    setCentralWidget(mainPanel);

    setWindowTitle("WELL HELLO THERE");
}

ChessWindow::~ChessWindow() {
   // delete mainPanel;
   // delete comp;
   // delete button;
   // delete shitAction;
   // delete quitAction;
   // delete fileMenu;
}

void ChessWindow::shit() {
    std::cout << "SHITS REAL" << std::endl;
}

void ChessWindow::hej() {
    std::cout << "HEJHEJ" << std::endl;
}
