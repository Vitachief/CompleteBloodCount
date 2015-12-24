#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "bloodcount.h"

#include <QDoubleSpinBox>

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
    void saveToFile();

private:

    /**
     * @brief interpretResults transform from enum's value
     * to text description
     */
    QString interpretResults(BloodEnums::Result res);
    /**
     * @brief updateGender updating class fielf "gender" from
     *  combobox
     */
    void updateGender();
    QString makeAddString(bool fl, QDoubleSpinBox* sp);

    QString makeResultString(bool isCurValOn = false);

    Ui::MainWindow *ui;
    //bool isEveryoneNormal = true;
    BloodEnums::Gender gender = BloodEnums::Gender::Male;
};

#endif // MAINWINDOW_H
