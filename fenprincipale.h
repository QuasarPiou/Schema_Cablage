#ifndef FENPRINCIPALE_H
#define FENPRINCIPALE_H
#include "FenNouveau.h"
#include <QtWidgets>
#include <QObject>

class FenPrincipale : public QMainWindow
{
        Q_OBJECT
    public:
    FenPrincipale();
   // FenNouveau(QWidget *parent);

    //private slots:
   // void nouveau();

    public slots:
    void nouveau();

    private:

};

#endif // FENPRINCIPALE_H

