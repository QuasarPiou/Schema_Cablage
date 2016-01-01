#include "FenNouveau.h"

FenNouveau::FenNouveau(QWidget *parent = 0) : QDialog(parent)
{

    fermer = new QPushButton("Fermer");

    QVBoxLayout *layoutPrincipal = new QVBoxLayout;

    layoutPrincipal->addWidget(fermer);

    resize(350, 450);
    setLayout(layoutPrincipal);

    connect(fermer, SIGNAL(clicked()), this, SLOT(accept()));;
}

