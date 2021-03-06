#include "FenPrincipale.h"
#include "FenNouveau.h"


FenPrincipale::FenPrincipale()

{
    QWidget *zoneCentrale = new QWidget;

        QFormLayout *layout = new QFormLayout;
        zoneCentrale->setLayout(layout);

    setCentralWidget(zoneCentrale);

    //création des menus
    QMenu *menuFichier = menuBar()->addMenu("&Fichier");

    //Création des actions
    QAction *actionNouveau = new QAction("&Nouveau", this);
    menuFichier->addAction(actionNouveau);



    QAction *actionQuitter = new QAction("&Quitter", this);
    menuFichier->addAction(actionQuitter);

    // Connexions des signaux et des slots

    connect(actionQuitter, SIGNAL(triggered()), qApp, SLOT(quit()));
    connect(actionNouveau, SIGNAL(triggered()), this, SLOT(nouveau()));


}

void FenPrincipale::nouveau()
{
   FenNouveau *fenetreNouveau = new FenNouveau(this);
   //                   fenetreNouveau->show();
   fenetreNouveau->exec();

}


