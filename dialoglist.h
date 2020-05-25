#ifndef DIALOGLIST_H
#define DIALOGLIST_H

#include <QWidget>

namespace Ui {
class DialogList;
}

class DialogList : public QWidget
{
    Q_OBJECT

public:
    explicit DialogList(QWidget *parent = 0);
    ~DialogList();

private:
    Ui::DialogList *ui;

    QVector< bool> isShow;
};

#endif // DIALOGLIST_H
