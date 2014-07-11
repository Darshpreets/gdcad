#include "command_dw.h"
#include "ui_command_dw.h"

command_dw::command_dw(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::command_dw)
{
    ui->setupUi(this);
}

command_dw::~command_dw()
{
    delete ui;
}
