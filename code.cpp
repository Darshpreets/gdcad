#include <code.h>
#include "ui_code.h"
#include <QtCore>
#include <QFileDialog>

code::code(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::code)
{

    ui->setupUi(this);


}

code::~code()
{
    delete ui;
}

void code::on_Save_code_clicked()
{
    QFile sFile(mFilename);
            if(sFile.open(QFile::WriteOnly | QFile::Text))
            {
                QTextStream out(&sFile);

                out<<ui->textEdit->toPlainText();

                sFile.flush();
                sFile.close();
            }

}

void code::on_Load_code_clicked()
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

               ui->textEdit->setPlainText(text);
           }
       }
}

void code::on_SaveAs_code_clicked()
{
    QString file = QFileDialog::getSaveFileName(this,"Open a File");

            if(!file.isEmpty())
            {
                mFilename=file;
                code::on_Load_code_clicked();
            }
}
