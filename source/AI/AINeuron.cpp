#include "../../include/AI/AINeuron.h"

namespace clim{

Neuron::Neuron(unsigned int numInputs):m_numInputs(numInputs),
    m_type(NeuronType::HIDDENNODE){

    for(unsigned int i =0; i<numInputs+1;i++){

        m_vecWeight.push_back(randomFloatClamp(-1,1));
    }

}

Neuron::Neuron(unsigned int numInputs, NeuronType type):m_numInputs(numInputs),
    m_type(type)
{
    for(unsigned int i =0; i<numInputs+1;i++){

        m_vecWeight.push_back(randomFloatClamp(-1,1));
    }

}



}
