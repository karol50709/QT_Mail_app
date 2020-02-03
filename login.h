#ifndef LOGIN_H
#define LOGIN_H

#include <QString>

class Login
{
public:
    QString host;
    QString login;
    QString haslo;
    QString wysylajacy;
    bool czySSL;
    int port;
};

#endif // LOGIN_H
