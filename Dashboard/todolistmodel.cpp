#include "todolistmodel.h"
#include <QFile>
#include <iostream>
#include <QTextStream>
#include <QCharRef>
#include <QMessageBox>

ToDoListModel::ToDoListModel(QObject *parent)
    :QAbstractTableModel (parent)
{

}

int ToDoListModel::rowCount(const QModelIndex &parent) const
{
    return time.size();
}

int ToDoListModel::columnCount(const QModelIndex &parent) const
{
     return 2;
}

QVariant ToDoListModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole){
        switch (index.column()){
        case 0:
            return time.at(index.row());
        case 1:
            return todo.at(index.row());
        }
    }
    return QVariant();
}

void ToDoListModel::openFile(QString filePath)
{
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly)){
            QMessageBox::information(0, "error", file.errorString());
            return;
}
    QTextStream in(&file);
    time.clear();
    todo.clear();

    for(int i = 0; !in.atEnd(); i++){
        QString line = in.readLine();
        QStringList fields = line.split(",");
        if(i==0) continue;

        time.push_back(fields[0]);
        todo.push_back(fields[1]);

}
    file.close();
    emit layoutChanged();
}
