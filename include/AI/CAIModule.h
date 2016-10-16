#ifndef CAIMODULE_H
#define CAIMODULE_H

#include <QtCore>
#include <QProcess>

namespace clim{

    //foward Declare

    class AICore;


    class CAIModule: public QObject{
        Q_OBJECT

    private:
        QString m_Name;
        QProcess m_Process;
        AICore *m_AI;
    public:
        //Constructors
        CAIModule():m_Name(QString("Default-Module")){
        m_AI = nullptr;
        }
        CAIModule(QString name):m_Name(name)
        {
            m_AI = nullptr;
        }
        CAIModule(QString name, AICore* ai):m_Name(name),
                                             m_AI(ai)
        {
        }

        ~CAIModule(){

        }

        //Virtual functions to be inherited
        virtual void update()=0;

        //Inline getters and setters
        inline void setName(QString name){
            this->m_Name = name;
        }
        inline void setAI(AICore *ai){
            this->m_AI = ai;
        }
        inline AICore *getAI(){
           return this->m_AI;
       }
        inline QString getName(){
            return m_Name;
        }
        inline QString Name()const{
            return m_Name;
        }

    };



}

#endif // CAIMODULE_H
