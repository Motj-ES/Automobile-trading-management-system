#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QtGui>
#include <QtCore>
#include <QtWidgets>
#include<QFile>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QPoint dragPosition;
    bool isWindowDragging;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private slots:
    void on_admin_btn_clicked();

    void on_exit_btn_clicked();

    void on_buyer_btn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
