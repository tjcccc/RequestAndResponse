#include "QtDebug"
#include "requestandresponse.h"
#include "./ui_requestandresponse.h"

RequestAndResponse::RequestAndResponse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RequestAndResponse)
{
    ui->setupUi(this);


    qInfo() << "hello, request and response.";
    qInfo() << QString::number(ui->methodTypeComboBox->currentIndex()) + ": " + ui->methodTypeComboBox->currentText();
}

RequestAndResponse::~RequestAndResponse()
{
    delete ui;
}

void RequestAndResponse::on_methodTypeComboBox_currentIndexChanged(int index)
{
    qInfo() << QString::number(ui->methodTypeComboBox->currentIndex()) + ": " + ui->methodTypeComboBox->currentText();
}

void RequestAndResponse::on_uriLineEdit_textChanged(const QString &arg1)
{
    qInfo() << ui->uriLineEdit->text();
}
