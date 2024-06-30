#include <QtWidgets/QApplication>
#include <QLabel>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  app.setOverrideCursor(Qt::BlankCursor);

  QLabel label("Lorem ipsum dolor sit amet.");
  label.setAlignment(Qt::AlignCenter);
  label.setStyleSheet("font-size: 50px");
  label.show();

  return app.exec();
}
