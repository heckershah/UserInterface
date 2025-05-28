#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<< QSqlDatabase::drivers();
}

MainWindow::~MainWindow()
{
    delete ui;
}
// button navigation function declarations
void MainWindow:: goToPage1()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow:: goToPage2()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow:: goToPage3()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void MainWindow:: goToPage4()
{
    ui->stackedWidget->setCurrentIndex(3);
}
void MainWindow:: goToPage5()
{
    ui->stackedWidget->setCurrentIndex(4);
}
void MainWindow:: goToPage6()
{
    ui->stackedWidget->setCurrentIndex(5);
}
void MainWindow:: goToPage7()
{
    ui->stackedWidget->setCurrentIndex(6);
}
void MainWindow:: goToPage8()
{
    ui->stackedWidget->setCurrentIndex(7);
}
void MainWindow:: goToPage9()
{
    ui->stackedWidget->setCurrentIndex(8);
}
void MainWindow:: goToPage10()
{
    ui->stackedWidget->setCurrentIndex(9);
}
void MainWindow:: goToPage11()
{
    ui->stackedWidget->setCurrentIndex(10);
}
void MainWindow:: goToPage12()
{
    ui->stackedWidget->setCurrentIndex(11);
}
void MainWindow:: goToPage13()
{
    ui->stackedWidget->setCurrentIndex(12);
}
void MainWindow:: goToPage14()
{
    ui->stackedWidget->setCurrentIndex(13);
}
void MainWindow:: goToPage15()
{
    ui->stackedWidget->setCurrentIndex(14);
}
void MainWindow:: goToPage16()
{
    ui->stackedWidget->setCurrentIndex(15);
}
void MainWindow:: goToPage17()
{
    ui->stackedWidget->setCurrentIndex(16);
}

void MainWindow:: goToPage18()
{
    ui->stackedWidget->setCurrentIndex(17);
}

void MainWindow:: goToPage19()
{
    ui->stackedWidget->setCurrentIndex(18);
}

           //button navigation
void MainWindow::on_pushButton_2_clicked()
{
    goToPage3();
}
void MainWindow::on_pushButton_3_clicked()
{
    goToPage4();
}
void MainWindow::on_pushButton_4_clicked()
{
    goToPage5();
}
void MainWindow::on_pushButton_7_clicked()
{
    goToPage6();
}
void MainWindow::on_pushButton_8_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_14_clicked()
{
    goToPage2();
}
void MainWindow::on_pushButton_12_clicked()
{
    goToPage4();
}
void MainWindow::on_pushButton_11_clicked()
{
    goToPage5();
}
void MainWindow::on_pushButton_16_clicked()
{
    goToPage6();
}
void MainWindow::on_pushButton_10_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_21_clicked()
{
    goToPage2();
}
void MainWindow::on_pushButton_20_clicked()
{
    goToPage3();
}
void MainWindow::on_pushButton_18_clicked()
{
    goToPage5();
}
void MainWindow::on_pushButton_23_clicked()
{
    goToPage6();
}
void MainWindow::on_pushButton_166_clicked()
{
    goToPage5();
}
void MainWindow::on_pushButton_24_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_26_clicked()
{
    goToPage2();
}
void MainWindow::on_pushButton_25_clicked()
{
    goToPage3();
}
void MainWindow::on_pushButton_6_clicked()
{
    goToPage4();
}
void MainWindow::on_pushButton_28_clicked()
{
    goToPage6();
}
void MainWindow::on_pushButton_17_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_33_clicked()
{
    goToPage2();
}
void MainWindow::on_pushButton_32_clicked()
{
    goToPage3();
}
void MainWindow::on_pushButton_31_clicked()
{
    goToPage4();
}
void MainWindow::on_pushButton_30_clicked()
{
    goToPage5();
}
void MainWindow::on_pushButton_29_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_46_clicked()
{
    goToPage8();
}
void MainWindow::on_pushButton_45_clicked()
{
    goToPage9();
}
void MainWindow::on_pushButton_43_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_51_clicked()
{
    goToPage7();
}
void MainWindow::on_pushButton_48_clicked()
{
    goToPage9();
}
void MainWindow::on_pushButton_44_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_54_clicked()
{
    goToPage7();
}
void MainWindow::on_pushButton_53_clicked()
{
    goToPage8();
}
void MainWindow::on_pushButton_56_clicked()
{
    goToPage1();
}

void MainWindow::on_pushButton_22_clicked()
{
    goToPage11();
}
void MainWindow::on_pushButton_15_clicked()
{
    goToPage12();
}
void MainWindow::on_pushButton_9_clicked()
{
    goToPage13();
}
void MainWindow::on_pushButton_34_clicked()
{
    goToPage14();
}
void MainWindow::on_pushButton_73_clicked()
{
    goToPage15();
}
void MainWindow::on_pushButton_103_clicked()
{
    goToPage16();
}
void MainWindow::on_pushButton_41_clicked()
{
    goToPage10();
}
void MainWindow::on_pushButton_39_clicked()
{
    goToPage12();
}
void MainWindow::on_pushButton_38_clicked()
{
    goToPage13();
}
void MainWindow::on_pushButton_42_clicked()
{
    goToPage14();
}
void MainWindow::on_pushButton_72_clicked()
{
    goToPage15();
}
void MainWindow::on_pushButton_102_clicked()
{
    goToPage16();
}
void MainWindow::on_pushButton_64_clicked()
{
    goToPage10();
}
void MainWindow::on_pushButton_60_clicked()
{
    goToPage11();
}
void MainWindow::on_pushButton_58_clicked()
{
    goToPage13();
}
void MainWindow::on_pushButton_65_clicked()
{
    goToPage14();
}
void MainWindow::on_pushButton_74_clicked()
{
    goToPage15();
}
void MainWindow::on_pushButton_101_clicked()
{
    goToPage16();
}
void MainWindow::on_pushButton_227_clicked()
{
    goToPage13();
}
void MainWindow::on_pushButton_70_clicked()
{
    goToPage10();
}
void MainWindow::on_pushButton_69_clicked()
{
    goToPage11();
}
void MainWindow::on_pushButton_68_clicked()
{
    goToPage12();
}
void MainWindow::on_pushButton_71_clicked()
{
    goToPage14();
}
void MainWindow::on_pushButton_75_clicked()
{
    goToPage15();
}
void MainWindow::on_pushButton_100_clicked()
{
    goToPage16();
}
void MainWindow::on_pushButton_79_clicked()
{
    goToPage10();
}
void MainWindow::on_pushButton_78_clicked()
{
    goToPage11();
}
void MainWindow::on_pushButton_77_clicked()
{
    goToPage12();
}
void MainWindow::on_pushButton_76_clicked()
{
    goToPage13();
}
void MainWindow::on_pushButton_81_clicked()
{
    goToPage15();
}
void MainWindow::on_pushButton_99_clicked()
{
    goToPage16();
}
void MainWindow::on_pushButton_86_clicked()
{
    goToPage10();
}
void MainWindow::on_pushButton_85_clicked()
{
    goToPage11();
}
void MainWindow::on_pushButton_84_clicked()
{
    goToPage12();
}
void MainWindow::on_pushButton_83_clicked()
{
    goToPage13();
}


void MainWindow::on_pushButton_87_clicked()
{
    goToPage14();
}
void MainWindow::on_pushButton_98_clicked()
{
    goToPage16();
}
void MainWindow::on_pushButton_94_clicked()
{
    goToPage10();
}
void MainWindow::on_pushButton_93_clicked()
{
    goToPage11();
}
void MainWindow::on_pushButton_92_clicked()
{
    goToPage12();
}
void MainWindow::on_pushButton_91_clicked()
{
    goToPage13();
}
void MainWindow::on_pushButton_95_clicked()
{
    goToPage14();
}
void MainWindow::on_pushButton_96_clicked()
{
    goToPage15();
}
void MainWindow::on_pushButton_90_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_61_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_62_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_63_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_66_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_82_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_89_clicked()
{
    goToPage1();
}
void MainWindow::on_pushButton_55_clicked()
{
    goToPage18();
}
void MainWindow::on_pushButton_105_clicked()
{
    goToPage19();
}
void MainWindow::on_pushButton_108_clicked()
{
    goToPage17();
}



void MainWindow::on_pushButton_109_clicked()
{
    goToPage19();
}


void MainWindow::on_pushButton_113_clicked()
{
    goToPage17();
}


void MainWindow::on_pushButton_112_clicked()
{
    goToPage18();
}


void MainWindow::on_pushButton_106_clicked()
{
    goToPage1();
}


void MainWindow::on_pushButton_110_clicked()
{
    goToPage1();
}


void MainWindow::on_pushButton_111_clicked()
{
    goToPage1();
}

