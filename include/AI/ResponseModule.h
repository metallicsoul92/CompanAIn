#ifndef RESPONSEMODULE_H
#define RESPONSEMODULE_H

#include "CAIModule.h"
#include "../utils/CTriple.h"


namespace clim{

    enum class ResponseStyle{
        RESPONSE_BASIC, // Basic responses like "Hello whats your name" or "I totally agree"
        RESPONSE_MEMLOOK,// Requires a lookup of memory, if this fails it will set state to
                         // Weblook
        RESPONSE_WEBLOOK,// Requires a lookup on the internet. Search engines will be searched
        RESPONSE_COMPLOOK, // Requires a lookup on the computer being used
        RESPONSE_DEFAULT // this is what is set when the constructor is made
    };
    static QVector<Triple<QString,ResponseStyle,QString>> ResponseList(){
        QVector<Triple<QString,ResponseStyle,QString>> responses;
        responses = QVector<Triple<QString,ResponseStyle,QString>>();
        responses.resize(150);
        responses.push_back(Triple<QString,ResponseStyle,QString>("Hello",
                                                                  ResponseStyle::RESPONSE_BASIC,
                                                                  "Hello User"
                                                                  ));
        return responses;
    }

    class ResponseModule : public CAIModule{
        Q_OBJECT

    private:
        ResponseStyle m_style;

    public:
        ResponseModule();
        ResponseModule(AICore *core);

        // CAIModule interface
    public:
        void update();

    public slots:
        void Respond(QString data);

    };

}


#endif // RESPONSEMODULE_H
