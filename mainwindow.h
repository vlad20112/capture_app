#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPainter>
#include <QGraphicsScene>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"
#include <QMainWindow>
using namespace cv;
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
    void on_pushButton_clicked();
    void on_progressBar_valueChanged(int value);

    void on_radioButton_5_clicked(bool checked);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

public slots:
    void load_image();

private:
    Ui::MainWindow *ui;
    Mat def;

};

#endif // MAINWINDOW_H
