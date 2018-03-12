#include "mainwindow.h"
#include<iostream>
#include <QThread>
#include <QFileDialog>
#include "ui_mainwindow.h"
#include "opencv/highgui.h"
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
    QProgressBar wait;
        QString str = QFileDialog::getOpenFileName(0,"Open Dialog","","*.jpg *.png *.jpeg");
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


void MainWindow::on_pushButton_clicked()
{
    load_image();
}

void MainWindow::on_progressBar_valueChanged(int value)
{


}
