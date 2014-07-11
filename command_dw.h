#ifndef COMMAND_DW_H
#define COMMAND_DW_H

#include <QDockWidget>

namespace Ui {
class command_dw;
}

class command_dw : public QDockWidget
{
    Q_OBJECT

public:
    explicit command_dw(QWidget *parent = 0);
    ~command_dw();

private:
    Ui::command_dw *ui;
};

#endif // COMMAND_DW_H
