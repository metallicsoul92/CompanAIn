#ifndef AICORE_H
#define AICORE_H


#include <QtCore>
#include "CAIModule.h"
#include "CAIMemory.h"

namespace clim{

    class AICore : public QObject{
        Q_OBJECT

    private:
        QVector<CAIModule*> m_modules;
        QVector<CAIMemory*> m_memory;
        QString m_inputString;
        QString m_outputString;

    public:
        AICore();
        AICore(QVector<CAIModule*> mod,QVector<CAIMemory*> mem);
        AICore(CAIModule *mod, CAIMemory *mem);
        ~AICore(){

        }

        void addModule(CAIModule *mod);
        void addMemory(CAIMemory *mem);

        CAIModule *getModule(quint16 index);
        CAIMemory *getMemory(quint16 index);

        QString getInputString();
        QString getOutputString();

        void setInputString(QString data);
        void setInputString();

        void setOutputString(QString data);
        void setOutputString();

    signals:
        void InputReceived();



    };



}



#endif // AICORE_H
