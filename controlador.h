#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <QObject>

#include "obrero.h"

//Definimos el valor por hora del salario en cada jornada

#define MATUTINO 5.15
#define VESPERTINO 8.50
#define NOCTURNO 12.65

//Definimos el valor de las horas extra

#define HORA_EXTRA 20.10
#define IESS 9.5

class Controlador : public QObject
{
    Q_OBJECT
public:
    explicit Controlador(QObject *parent = nullptr);

    /*Declara los argumentos para la función
     *Valoraremos 3 datos NOMBRE, HORAS Y JORNADA*/

    void setDatos(QString nombre, int horas, TipoJornada jornada);
    bool calcular();
    QString getDAtos();

signals:

private:
    Obrero *m_modelo;

};

#endif // CONTROLADOR_H
