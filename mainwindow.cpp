#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);

    ui->scrAreaInput->setLayout(ui->layScroll);

    ui->centralWidget->setLayout(ui->layCentral);


    ui->scrWidget->setLayout(ui->layScroll);

    ui->scrAreaInput->setWidget(ui->scrWidget);

    connect(ui->bGetResults, SIGNAL(clicked()),
            SLOT(getResults()));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::getResults(){
    ui->teResult->clear();
    updateGender();
    QString answer;
    answer += "Эритроциты: " +
            interpretResults(BloodCount::getRBC(ui->sbRBC->value(), gender))
            + "\n";
    answer += "Гемоглобин: " +
            interpretResults(BloodCount::getHGB(ui->sbHGB->value(), gender))
            + "\n";
    answer += "Гематокрит: " +
            interpretResults(BloodCount::getHCT(ui->sbHCT->value(), gender))
            + "\n";
    answer += "Средний объём эритроцитов: " +
            interpretResults(BloodCount::getMCV(ui->sbMCV->value(), gender))
            + "\n";
    answer += "Среднее содержание гемоглобина в эритроцитах: " +
            interpretResults(BloodCount::getMCH(ui->sbMCH->value(),gender))
            + "\n";
    answer += "Средняя концентрация гемоглобина в эритроцитах: " +
            interpretResults(BloodCount::getMCHC(ui->sbMCHC->value(),gender))
            + "\n";
    answer += "Цветовой показатель: " +
            interpretResults(BloodCount::getCF(ui->sbCF->value(),gender))
            + "\n";
    answer += "Ретикулоциты: " +
            interpretResults(BloodCount::getRTC(ui->sbRTC->value(),gender))
            + "\n";
    answer += "Тромбоциты: " +
            interpretResults(BloodCount::getPLT(ui->sbPLT->value(),gender))
            + "\n";
    answer += "Лейкоциты: " +
            interpretResults(BloodCount::getWBC(ui->sbWBC->value(),gender))
            + "\n";
    answer += "Сегментоядерные нейтрофилы: " +
            interpretResults(BloodCount::getNe(ui->sbNE->value(),gender))
            + "\n";
    answer += "Палочкоядерные нейтрофилы: " +
            interpretResults(BloodCount::getPN(ui->sbPN->value(),gender))
            + "\n";
    answer += "Миелоциты: " +
            interpretResults(BloodCount::getMie(ui->sbMie->value(),gender))
            + "\n";
    answer += "Метамиелоциты (юные): " +
            interpretResults(BloodCount::getMieY(ui->sbMieY->value(),gender))
            + "\n";
    answer += "Лимфоциты: " +
            interpretResults(BloodCount::getLYM(ui->sbLYM->value(),gender))
            + "\n";
    answer += "Моноциты: " +
            interpretResults(BloodCount::getMON(ui->sbMON->value(),gender))
            + "\n";
    answer += "Эозонофилы: " +
            interpretResults(BloodCount::getEO(ui->sbEO->value(),gender))
            + "\n";
    answer += "Базофилы: " +
            interpretResults(BloodCount::getBA(ui->sbBA->value(),gender))
            + "\n";
    answer += "Вироциты: " +
            interpretResults(BloodCount::getVir(ui->sbVir->value(),gender))
            + "\n";
    answer += "Плазмоциты: " +
            interpretResults(BloodCount::getPlaz(ui->sbPlaz->value(),gender))
            + "\n";
    answer += "СОЭ: " +
            interpretResults(BloodCount::getESR(ui->sbESR->value(),gender))
            + "\n";
    ui->teResult->setText(answer);
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
        return QString("Ниже нормы");
    }break;
    case Result::Decreased:{
        return QString("Выше нормы");
    }break;
    case Result::Incorrect_Input:{
        return QString("Неверно указаны данные");
    }break;
    }
    return QString("Неверно указаны данные");
}
