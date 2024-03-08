#include "requestandresponse.h"
#include "./ui_requestandresponse.h"

RequestAndResponse::RequestAndResponse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RequestAndResponse)
{
    ui->setupUi(this);
}

RequestAndResponse::~RequestAndResponse()
{
    delete ui;
}
