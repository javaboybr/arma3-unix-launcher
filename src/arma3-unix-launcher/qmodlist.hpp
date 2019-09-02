#ifndef QMODLIST_HPP_
#define QMODLIST_HPP_

#include <QTableWidget>

#include <iostream>

#include <fmt/format.h>

class QModList : public QTableWidget
{
    public:
        QModList(QWidget *parent) : QTableWidget(parent)
        {
            std::cout.setf(std::ios::unitbuf);
            std::cout << "constructor\n";
            this->setDragDropMode(QAbstractItemView::DragDrop);
            //fmt::print("HEY I'M CONSTRUCTED");

            this->setSelectionMode(QAbstractItemView::SingleSelection);
            this->setDragEnabled(true);
            this->viewport()->setAcceptDrops(true);
            this->setDropIndicatorShown(true);
        }
        ~QModList() override = default;

        bool dropMimeData(int row, int column, const QMimeData *data, Qt::DropAction action) override;
        Qt::DropActions supportedDropActions() const override;
};

#endif
