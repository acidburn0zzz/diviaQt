#ifndef DIVIAQT_H
#define DIVIAQT_H

#include <QMainWindow>
#include <QtWebKit/QWebView>
#include <QMessageBox>

namespace Ui {
class DiviaQt;
}

class DiviaQt : public QMainWindow
{
    Q_OBJECT

public:
    explicit DiviaQt(QWidget *parent = 0);
    ~DiviaQt();

private slots:
    void on_btn_aPropos_clicked();

private:
    Ui::DiviaQt *ui;
};

#endif // DIVIAQT_H
