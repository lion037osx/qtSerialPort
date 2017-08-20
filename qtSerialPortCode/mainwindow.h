#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qextserialport.h>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void onDatosRecibidos(); //it is slot metod

    void on_pushButton_Conectar_clicked();

    void on_pushButton_Enviar_clicked();

    void send_at_cmd(QString cmd);

    void delay();

    void on_pushButton_log_clicked();

    void on_pushButton_closed_clicked();

    void updateTime(char * txt);

    void on_pushButton_clear_clicked();

private:
Ui::MainWindow *ui;
QextSerialPort *m_port; // members variable init with m_
int m_cant_bytes_enviados;
int m_cant_bytes_recibidos;
char * rx_data;
QString buffer;
void EnviarComando_rs232(QString com);

QFile file;
bool  stat;
};

#endif // MAINWINDOW_H
