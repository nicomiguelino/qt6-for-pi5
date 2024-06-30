#include <QtWidgets/QApplication>
#include <QLabel>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  QLabel label("Hello, World!");
  label.setAlignment(Qt::AlignCenter);
  label.setStyleSheet("font-size: 50px");
  label.show();

  return app.exec();
}
