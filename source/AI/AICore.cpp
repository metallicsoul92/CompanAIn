#include "../../include/AI/AICore.h"

namespace clim{

AICore::AICore()
{
    m_modules = QVector<CAIModule*>(10);
    m_memory = QVector<CAIMemory*>(10);
}

AICore::AICore(QVector<CAIModule*> mod, QVector<CAIMemory*> mem)
{
    m_modules = mod;
    m_memory = mem;
}

AICore::AICore(CAIModule *mod, CAIMemory *mem)
{
    m_modules = QVector<CAIModule*>(10);
    m_memory = QVector<CAIMemory*>(10);

    m_modules.push_back(mod);
    m_memory.push_back(mem);

}

void AICore::addModule(CAIModule *mod)
{
    m_modules.push_back(mod);
}

void AICore::addMemory(CAIMemory *mem)
{
    m_memory.push_back(mem);
}

CAIModule *AICore::getModule(quint16 index)
{
    return this->m_modules[index];
}

CAIMemory *AICore::getMemory(quint16 index)
{
    return this->m_memory[index];
}

QString AICore::getInputString()
{
    return this->m_inputString;
}

QString AICore::getOutputString()
{
    return this->m_outputString;
}

void AICore::setInputString(QString data)
{
    m_inputString = data;
}

void AICore::setInputString(){
    m_inputString.clear();
}

void AICore::setOutputString(QString data)
{
    m_outputString = data;
    emit SendOutput(data);
}
void AICore::setOutputString()
{
    m_outputString.clear();
    emit SendOutput(m_outputString);
}





}
