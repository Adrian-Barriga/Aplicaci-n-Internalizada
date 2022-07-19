#include "salarios.h"
#include <QTranslator>

#include <QApplication>
#include <QInputDialog>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QTranslator T;
    QStringList langs;
    langs << "Español" << "Portugues" << "English";
    const QString lang = QInputDialog::getItem(NULL,"Lenguaje","Select a Leguaje", langs);

    if (lang == "Portugues"){
        T.load("://portugues.qm");
    } else if (lang == "English"){
        T.load("://ingles.qm");
    }
    if (lang != "Español") {
        a.installTranslator(&T);
    }

    Salarios w;
    w.show();
    return a.exec();
}
