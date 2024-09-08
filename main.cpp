#include <QtCore>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <iostream>


QTextStream cout(stdout, QIODevice::WriteOnly);

class MeinLabel : public QLabel {
public:
    MeinLabel (const char* text) : QLabel(text) {}

};

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    MeinLabel mlabel("First Qt Program");
    mlabel.setMinimumSize(200, 50);

    mlabel.show();

//    QString s1("Loekken");
//    cout << s1 << Qt::endl;

    return app.exec();
}
