#ifndef REQUESTANDRESPONSE_H
#define REQUESTANDRESPONSE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class RequestAndResponse;
}
QT_END_NAMESPACE

class RequestAndResponse : public QMainWindow
{
    Q_OBJECT

public:
    RequestAndResponse(QWidget *parent = nullptr);
    ~RequestAndResponse();

private:
    Ui::RequestAndResponse *ui;
};
#endif // REQUESTANDRESPONSE_H
