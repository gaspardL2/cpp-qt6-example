//
// Created by witann on 08/09/24.
//

#ifndef WINDOW_H
#define WINDOW_H
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMessageBox>
#include <fstream>

class Window : public QMainWindow {
protected:
    void closeEvent(QCloseEvent*) {
        auto antwort = QMessageBox::warning(this, "Title",
                                            "closeEvent called. Sichern?",
                                            QMessageBox::Yes | QMessageBox::No);
        if (antwort == QMessageBox::Yes) {
            save();
        }
    }

private:
    void save()
    {
        std::ofstream log("data.txt");
        log << " gesicherte Daten\n";
        log.close();
    }
};
#endif //WINDOW_H

