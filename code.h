#ifndef CODE_DOCKWIDGET_H
#define CODE_DOCKWIDGET_H

#include <QDockWidget>
#include <QFileDialog>

namespace Ui {
class code;
}

class code : public QDockWidget
{
    Q_OBJECT

public:
    explicit code(QWidget *parent = 0);
   void createDockWindows();
    ~code();


private slots:
    void on_Save_code_clicked();

    void on_Load_code_clicked();

    void on_SaveAs_code_clicked();

private:
    Ui::code *ui;
    QString mFilename;

};

#endif // CODE_DOCKWIDGET_H
