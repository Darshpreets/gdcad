#ifndef CODE_DOCKWIDGET_H
#define CODE_DOCKWIDGET_H

#include <QDockWidget>
#include <QTextStream>
#include <QFileDialog>
#include <QMainWindow>
#include <QtCore>

namespace Ui {
class code_dockwidget;
}

class code_dockwidget : public QDockWidget
{
    Q_OBJECT

public:
    explicit code_dockwidget(QWidget *parent = 0);
    ~code_dockwidget();

private slots:

    void on_code_save_clicked();

    void on_code_run_clicked();

    void on_code_open_clicked();

    void on_code_saveas_clicked();


private:
    Ui::code_dockwidget *ui;
    QString mFilename;
};

#endif // CODE_DOCKWIDGET_H
