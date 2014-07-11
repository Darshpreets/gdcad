#include "code_dockwidget.h"
#include "ui_code_dockwidget.h"
#include <QFileDialog>
#include <QtCore>

code_dockwidget::code_dockwidget(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::code_dockwidget)
{
    ui->setupUi(this);
}

code_dockwidget::~code_dockwidget()
{
    delete ui;
}



void code_dockwidget::on_code_run_clicked()
{

}

void code_dockwidget::on_code_open_clicked()
{
    QString file = QFileDialog::getOpenFileName(this,"Open a File ");
           if ( !file.isEmpty())
           {
               QFile sFile(file);
               if(sFile.open(QFile::ReadOnly | QFile::Text ))
               {
                   QTextStream in(&sFile);
                   QString text =in.readAll();
                   sFile.close();

                   ui->code_input->setPlainText(text);
               }
           }
}

void code_dockwidget::on_code_save_clicked()
{
    QString mfileName = QFileDialog::getSaveFileName(this,"Open file name");
    QFile sFile(mfileName);
    QString temp;
    if (!mfileName.isEmpty())
    {
       mfileName = mfileName;
        if(sFile.open(QFile::WriteOnly)| QFile::Text){
            QTextStream out(&sFile);
            out<< temp;
            sFile.flush();
            sFile.close();
        }
    }
}

void code_dockwidget::on_code_saveas_clicked()
{
    QString fn = QFileDialog::getSaveFileName(this, tr("Save as..."),
                                                 QString(), tr("ODF files (*.odt);;HTML-Files (*.htm *.html);;All Files (*)"));
    QString file = QFileDialog::getSaveFileName(this,"Open a File");

            if(!file.isEmpty())
            {
                mFilename=file;

                return on_code_save_clicked();
            }
}
