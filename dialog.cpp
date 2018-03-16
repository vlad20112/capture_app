#include "dialog.h"
#include "ui_dialog.h"
#include <QThread>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QProgressDialog>
using namespace std;


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->Url->setText("qwdqwd");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    /*class MyThread
    {
        void run()
        {
            QNetworkAccessManager *manager;
            QUrl url = (ui->Url->text());
            QNetworkReply* rep = manager -> get(QNetworkRequest(url));
            connect(rep,SIGNAL(readyRead()),
                   this,SLOT(httpReadyRead()));
       }
    };

    MyThread load;
    //load.run();*/
}

QThread MyThread;

void Dialog::on_buttonBox_rejected()
{
    this->close();
}
