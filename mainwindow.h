#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "bloodcount.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void getResults();

private:

    QString interpretResults(BloodEnums::Result res);
    void updateGender();
    Ui::MainWindow *ui;
    bool isEveryoneNormal = true;
    BloodEnums::Gender gender = BloodEnums::Gender::Male;
};

#endif // MAINWINDOW_H
