#include "FenPrincipale.h"


FenPrincipale::FenPrincipale()

{
    QWidget *zoneCentrale = new QWidget;

        QFormLayout *layout = new QFormLayout;
        zoneCentrale->setLayout(layout);

    setCentralWidget(zoneCentrale);

    //création des menus
    QMenu *menuFichier = menuBar()->addMenu("&Fichier");
    QAction *actionQuitter = new QAction("&Quitter", this);
    menuFichier->addAction(actionQuitter);
    connect(actionQuitter, SIGNAL(triggered()), qApp, SLOT(quit()));


}

