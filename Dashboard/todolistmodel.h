#ifndef TODOLISTMODEL_H
#define TODOLISTMODEL_H

#include <QAbstractTableModel>
#include <vector>

class ToDoListModel : public QAbstractTableModel
{
public:
    ToDoListModel(QObject *parent);



public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;

    void openFile(QString filePath);


    std::vector<QString> todo;
    std::vector<QString> time;

};

#endif // TODOLISTMODEL_H
