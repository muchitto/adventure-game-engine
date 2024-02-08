#include <QApplication>

#include "mainwindow.h"

// Start the QT editor application
int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  MainWindow window;
  window.show();
  
  return app.exec();
}