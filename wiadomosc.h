#ifndef WIADOMOSC_H
#define WIADOMOSC_H

#include <QString>



class Wiadomosc
{
public:
    Wiadomosc(QString pTemat,
              QStringList pOdbiorcy,
              QString pNadawca,
              QString pData,
              QString pEtykieta,
              QString pTresc);
};

#endif // WIADOMOSC_H
