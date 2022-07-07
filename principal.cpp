#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_cmdCalcular_released()
{
    calcular();
}

void Principal::on_actionCalcular_triggered()
{
    calcular();
}

void Principal::calcular()
{
    double numero1 = ui->inNum1->value();
    double numero2 = ui->inNum2->value();

    double resultado = 0.0;

            switch (ui->inOperacion->currentIndex()){
            case 0:
                resultado = numero1 + numero2;
            break;
            case 1:
                resultado = numero1 - numero2;
            break;
            case 2:
                resultado = numero1 * numero2;
            break;
            case 3:
                resultado = numero1 / numero2;
            break;
            default:
            break;
}
            QMessageBox::information(this,"Resultado","El resultado es: " + QString::number(resultado));
}

