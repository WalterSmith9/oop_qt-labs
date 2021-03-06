#include <QApplication>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "ui_mainwindow.h"
#include <algorithm>
#include <QTextStream>
#include <QFile>
#include <QDir>
#include <QCoreApplication>
#include <QMessageBox>
#include "Car.h"

#ifndef CSVREADER_H
#define CSVREADER_H

#endif // CSVREADER_H

class CSVReader
{
private:
    QFile File;
public:
    bool openFile(QString FileName);

    std::vector<Car> GetVector();

};
