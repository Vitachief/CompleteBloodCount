#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QMessageBox"
#include "QFileDialog"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    //Setting data from form to this window
    ui->setupUi(this);

    //Setting scroll to its area
    ui->scrAreaInput->setLayout(ui->layScroll);

    //Setting central layout from form to this window
    ui->centralWidget->setLayout(ui->layCentral);

    //Setting layout for scroll's widget
    ui->scrWidget->setLayout(ui->layScroll);

    //Setting widget to scroll
    ui->scrAreaInput->setWidget(ui->scrWidget);

    //Connecting signal from button to slot
    connect(ui->bGetResults, SIGNAL(clicked()),
            SLOT(getResults()));

    connect(ui->bSaveToFile, SIGNAL(clicked()),
            SLOT(saveToFile()));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::getResults(){
    ui->teResult->clear();
    //Updating current gender from combobox
    updateGender();
    //String with answer

    //Setting text to text edit
    ui->teResult->setText(makeResultString());
}

void MainWindow::saveToFile(){
  /* if (ui->teResult->document()->isEmpty())   {
       QMessageBox::warning(this,
                                "Предупреждение",
                                "Нет данных для записи в файл. Для начала получите, пожалуйста, ваш результат");
       return;
   }*/
   QString filename = QFileDialog::getSaveFileName(this);
   if (filename.isEmpty()){
       return;
   }
   QFile file;
   file.setFileName(filename);
   if (!file.open(QIODevice::Text | QIODevice::WriteOnly)){
       QMessageBox::critical(this, "Ошибка","Не удалось создать файл");
       return;
   }
   QString resultString(makeResultString(true));
   if (file.write(resultString.toLocal8Bit()) == -1)
   {
       QMessageBox::critical(this, "Ошибка",
                       "Не удалось записать данные в файл");
    return;

   }

}

void MainWindow::updateGender(){
    using namespace BloodEnums;
    int val = ui->cmbGender->currentIndex();
    switch (val){
    case 0:{
        gender = Gender::Male;
    }break;
    case 1:{
        gender = Gender::Female;
    }break;
    case 2:{
        gender = Gender::Child13_15y;
    }break;
    case 3:{
        gender = Gender::Child7_12y;
    }break;
    case 4:{
        gender = Gender::Child1_6y;
    }break;
    default:
        gender = Gender::Male;
    }
}


QString MainWindow::interpretResults(BloodEnums::Result res){
    using namespace BloodEnums;
    switch (res){
    case Result::Normal:{
        return QString("В пределах нормы");
    }break;
    case Result::Increased:{
        return QString("Выше нормы");
    }break;
    case Result::Decreased:{
        return QString("Ниже нормы");
    }break;
    case Result::Incorrect_Input:{
        return QString("Неверно указаны данные");
    }break;
    }
    return QString("Неверно указаны данные");
}

QString MainWindow::makeAddString(bool fl, QDoubleSpinBox* sp)
{
    if (fl)
    {
        QString add = sp->suffix();
        if (!add.isEmpty())
            add = " " + add;
        return QString("(") + QString::number(sp->value()) + add + QString("): ");
    }
    return QString(": ");
}

QString MainWindow::makeResultString(bool isCurValOn)
{
    QString answer;
    if (isCurValOn)
    {
        answer += ui->cmbGender->currentText() + "\n";
    }

    answer += "Эритроциты" + makeAddString(isCurValOn, ui->sbRBC) +
            interpretResults(BloodCount::getRBC(ui->sbRBC->value(), gender))
            + "\n";
    answer += "Гемоглобин" + makeAddString(isCurValOn, ui->sbHGB) +
            interpretResults(BloodCount::getHGB(ui->sbHGB->value(), gender))
            + "\n";
    answer += "Гематокрит" + makeAddString(isCurValOn, ui->sbHCT) +
            interpretResults(BloodCount::getHCT(ui->sbHCT->value(), gender))
            + "\n";
    answer += "Средний объём эритроцитов" + makeAddString(isCurValOn, ui->sbMCV) +
            interpretResults(BloodCount::getMCV(ui->sbMCV->value(), gender))
            + "\n";
    answer += "Среднее содержание гемоглобина в эритроцитах" + makeAddString(isCurValOn, ui->sbMCH) +
            interpretResults(BloodCount::getMCH(ui->sbMCH->value(),gender))
            + "\n";
    answer += "Средняя концентрация гемоглобина в эритроцитах" + makeAddString(isCurValOn, ui->sbMCHC) +
            interpretResults(BloodCount::getMCHC(ui->sbMCHC->value(),gender))
            + "\n";
    answer += "Цветовой показатель" + makeAddString(isCurValOn, ui->sbCF) +
            interpretResults(BloodCount::getCF(ui->sbCF->value(),gender))
            + "\n";
    answer += "Ретикулоциты" + makeAddString(isCurValOn, ui->sbRTC) +
            interpretResults(BloodCount::getRTC(ui->sbRTC->value(),gender))
            + "\n";
    answer += "Тромбоциты" + makeAddString(isCurValOn, ui->sbPLT) +
            interpretResults(BloodCount::getPLT(ui->sbPLT->value(),gender))
            + "\n";
    answer += "Лейкоциты" + makeAddString(isCurValOn, ui->sbWBC) +
            interpretResults(BloodCount::getWBC(ui->sbWBC->value(),gender))
            + "\n";
    answer += "Сегментоядерные нейтрофилы" + makeAddString(isCurValOn, ui->sbNE) +
            interpretResults(BloodCount::getNe(ui->sbNE->value(),gender))
            + "\n";
    answer += "Палочкоядерные нейтрофилы" + makeAddString(isCurValOn, ui->sbPN) +
            interpretResults(BloodCount::getPN(ui->sbPN->value(),gender))
            + "\n";
    answer += "Миелоциты" + makeAddString(isCurValOn, ui->sbMie) +
            interpretResults(BloodCount::getMie(ui->sbMie->value(),gender))
            + "\n";
    answer += "Метамиелоциты (юные)" + makeAddString(isCurValOn, ui->sbMieY) +
            interpretResults(BloodCount::getMieY(ui->sbMieY->value(),gender))
            + "\n";
    answer += "Лимфоциты" + makeAddString(isCurValOn, ui->sbLYM) +
            interpretResults(BloodCount::getLYM(ui->sbLYM->value(),gender))
            + "\n";
    answer += "Моноциты" + makeAddString(isCurValOn, ui->sbMON) +
            interpretResults(BloodCount::getMON(ui->sbMON->value(),gender))
            + "\n";
    answer += "Эозонофилы" + makeAddString(isCurValOn, ui->sbEO) +
            interpretResults(BloodCount::getEO(ui->sbEO->value(),gender))
            + "\n";
    answer += "Базофилы" + makeAddString(isCurValOn, ui->sbBA) +
            interpretResults(BloodCount::getBA(ui->sbBA->value(),gender))
            + "\n";
    answer += "Вироциты" + makeAddString(isCurValOn, ui->sbVir) +
            interpretResults(BloodCount::getVir(ui->sbVir->value(),gender))
            + "\n";
    answer += "Плазмоциты" + makeAddString(isCurValOn, ui->sbPlaz) +
            interpretResults(BloodCount::getPlaz(ui->sbPlaz->value(),gender))
            + "\n";
    answer += "СОЭ" + makeAddString(isCurValOn, ui->sbESR) +
            interpretResults(BloodCount::getESR(ui->sbESR->value(),gender))
            + "\n";

    return answer;
}
