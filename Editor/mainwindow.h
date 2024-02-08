//
// Created by Taneli Heikkinen on 8.2.2024.
//

#ifndef ADVENTUREGAMEENGINE_MAINWINDOW_H
#define ADVENTUREGAMEENGINE_MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui {
	class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);

	~MainWindow() override;

private:
	Ui::MainWindow *ui;
};


#endif //ADVENTUREGAMEENGINE_MAINWINDOW_H
