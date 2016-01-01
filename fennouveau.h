#ifndef FENNOUVEAU_H
#define FENNOUVEAU_H
#include <QtGui>
#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>

class FenNouveau : public QDialog
{
    public:
        FenNouveau(QWidget *parent);

    private:
        QPushButton *fermer;

};

#endif // FENNOUVEAU_H

