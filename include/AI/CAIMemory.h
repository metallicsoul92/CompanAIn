#ifndef CAIMEMORY_H
#define CAIMEMORY_H

#include <QtCore>
#include <QVariant>

namespace clim{

/*
 * CAIMemory: What defines a memory module. Contains a QString which represents the name of the memory,
 * quint16 which represents AMS, QVector of CAIMemories which represent memories which associate to this one,
 * a CAIMemory which represent Parent, and QVariant which represents the data
 *
 */


    class CAIMemory: public QObject{
        Q_OBJECT

    private:
        QString m_MemoryName;
        quint16 m_AMS; //Associated Memory Size
        QVector<CAIMemory*> m_AssociatedMemory;
        CAIMemory *m_ParentMemory;
        QVariant m_MemoryData;
    public:
        // These constructor sets the associated size to 10 and ParentMemory to nullptr
        CAIMemory(){

        }

        CAIMemory(QString memName):m_MemoryName(memName),m_AMS(10),m_AssociatedMemory(),m_ParentMemory(nullptr),
        m_MemoryData(QVariant())
        {

        }
        CAIMemory(QString memName,QVariant data):m_MemoryName(memName),m_AMS(10),m_AssociatedMemory(),
        m_ParentMemory(nullptr),m_MemoryData(data)
        {

        }
        CAIMemory(QString memName,QVariant data, CAIMemory *parent):m_MemoryName(memName),m_AMS(10),
        m_AssociatedMemory(),m_ParentMemory(parent),m_MemoryData(data)
        {

        }
        //These are user defined sizes/
        CAIMemory(QString memName, quint16 memsize,QVariant data ):
        m_MemoryName(memName),m_AMS(memsize),m_AssociatedMemory(QVector<CAIMemory*>(memsize)),m_MemoryData(data)
        {

        }
        CAIMemory(QString memName,QVariant data,quint16 memsize, CAIMemory *firstAssociatedData):
        m_MemoryName(memName),m_AMS(memsize),m_AssociatedMemory(QVector<CAIMemory*>(memsize)),
        m_MemoryData(data)
        {
            this->m_AssociatedMemory.push_back(firstAssociatedData);
        }
        CAIMemory(QString memName,QVariant data,quint16 memsize,CAIMemory* parent, CAIMemory *firstAssociatedData):
        m_MemoryName(memName),m_AMS(memsize),m_AssociatedMemory(QVector<CAIMemory*>(memsize)),
        m_ParentMemory(parent),m_MemoryData(data)
        {
            this->m_AssociatedMemory.push_back(firstAssociatedData);
        }
        ~CAIMemory(){
            for(CAIMemory* mem : m_AssociatedMemory){
                delete mem;
            }
        }
        inline void setAMS(quint16 memsize){
            m_AMS = memsize;
        }
        inline void addAssociatedMemory(CAIMemory *memory){
            m_AssociatedMemory.push_back(memory);
        }
        inline void setMemory(QVariant data){
            m_MemoryData = data;
        }
        inline void setName(QString memoryName){
            m_MemoryName = memoryName;
        }
        inline QString getName(){
            return this->m_MemoryName;
        }
        inline QString Name()const{
            return this->m_MemoryName;
        }
        inline quint16 getAMS(){
        return this->m_AMS;
        }
        inline quint16 AMS()const{
            return this->m_AMS;
        }
        inline CAIMemory *getParent(){
            return this->m_ParentMemory;
        }
        inline CAIMemory *Parent()const{
            return this->m_ParentMemory;
        }
        inline QVector<CAIMemory*> getAssociatedMemory(){
            return this->m_AssociatedMemory;
        }
        inline QVector<CAIMemory*> AssociatedMemory()const{
            return this->m_AssociatedMemory;
        }
        inline CAIMemory *getAssociatedMemory(quint16 index){
            return this->m_AssociatedMemory[index];
        }
        inline CAIMemory *AssociatedMemory(quint16 index)const{
            return this->m_AssociatedMemory[index];
        }
        inline QVariant getMemoryData(){
            return this->m_MemoryData;
        }
        inline QVariant memoryData()const{
            return this->m_MemoryData;
        }

    };



}


#endif // CAIMEMORY_H
