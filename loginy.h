#ifndef LOGINY_H
#define LOGINY_H

#include "login.h"

#include <QJsonObject>

class Loginy
{
public:
    Loginy();
    QList<Login> read(const QJsonObject &json);
    void write(QList<Login> Loginy) const;
};

#endif // LOGINY_H
