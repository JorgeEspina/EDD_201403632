#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>



namespace Ui {
class Principal;
}

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal(QWidget *parent = 0);
    ~Principal();

private slots:
    void on_btnSiguienteTurno_clicked();

private:
    Ui::Principal *ui;
};


#endif // PRINCIPAL_H
