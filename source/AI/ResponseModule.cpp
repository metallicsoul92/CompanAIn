#include "../../include/AI/ResponseModule.h"
#include "../../include/AI/AICore.h"
namespace clim{

ResponseModule::ResponseModule():CAIModule("Response-Module")
{

}

ResponseModule::ResponseModule(AICore *core):CAIModule("Response-Module",core)
{
    connect(getAI(),this->getAI()->InputReceived(),this,&this->Respond(QString));
}

void ResponseModule::update()
{

    //Check for input

    //respond to input (basic responses)

    //set respond string to output string

    //clear input string


}

void ResponseModule::Respond(QString data)
{
    switch(getAI()->getInputString()){

    }
}





}
