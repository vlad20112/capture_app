#include "mainwindow.h"
#include "dialog.h"
#include<iostream>

#include <QThread>
#include <QUrl>
#include <QDialog>
#include <QFileDialog>
#include <QPainter>
#include "ui_mainwindow.h"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"

using namespace cv;
using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    Mat A(2,2, CV_8UC3, Scalar(0,0,255));
    cout << "M= " << endl << " " <<A << endl<< endl;
    delete ui;
}


void MainWindow::load_image()
{
        QString str = QFileDialog::getOpenFileName(0,"Open Dialog","","*.jpg *.png *.jpeg");
        String str1 = str.toStdString();
        def = cv::imread(str1);
        /*Threader loader;*/
       /* IplImage *img = cvLoadImage("/home/test/Downloads/i.jpeg",CV_LOAD_IMAGE_COLOR);
        cvNamedWindow("Ex",CV_WINDOW_AUTOSIZE);
        cvShowImage("Ex",img);
        cvWaitKey(0);
        cvReleaseImage( &img);
        cvDestroyWindow("Ex");*/
        QGraphicsScene *q = new QGraphicsScene;
        q->addPixmap(QPixmap(str));
        ui->graphicsView->setScene(q);
        ui->graphicsView->show();
}

void Init()
{
    QGraphicsScene *q = new QGraphicsScene;
    QBrush br(Qt::red);
    QPen pen(Qt::black);
}
/*void Draw(MainWindow ui)
{
     ui->graphicsView->setScene(Init());
    q->addRect(ui->graphicsView->x(),ui->graphicsView->y(),4,4,pen,br);
}*/

void MainWindow::on_pushButton_clicked()
{
    //Dialog a;
    //a.exec();
    load_image();
}

void MainWindow::on_progressBar_valueChanged(int value)
{


}


void QGraphicsView::mousePressEvent(QMouseEvent *event)
{
}

void QGraphicsView::mouseMoveEvent(QMouseEvent *event)
{
   // Draw();
}
void QGraphicsView:: mouseReleaseEvent(QMouseEvent *event)
{

}


void MainWindow::on_radioButton_5_clicked(bool checked)
{

    if (checked == true)
    {

        ui->graphicsView->setDragMode(QGraphicsView::RubberBandDrag);
        Init();
    }
    else
    {
        ui->graphicsView->setDragMode(QGraphicsView::NoDrag);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    Mat prom = def;
    Mat prom_1;
    cv:
    cv::namedWindow("alg_1",WINDOW_AUTOSIZE);
    cv::imshow("alg_1",prom);
    cv::waitKey();
}

void MainWindow::on_pushButton_3_clicked()
{
}
