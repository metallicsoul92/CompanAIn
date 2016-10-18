#ifndef AINEURONLAYER_H
#define AINEURONLAYER_H

#include "AINeuron.h"

namespace clim{

    class NeuronLayer{

    private:
        unsigned int m_numNeurons;
        QVector<Neuron> m_Neurons;


    public:
        NeuronLayer(unsigned int NumNeurons,unsigned int NumInputsPerNeuron);

        unsigned int getNumNeurons(){return m_numNeurons;}
        unsigned int NumNeurons()const{return m_numNeurons;}

        void setNumNeurons(unsigned int num){
            m_numNeurons = num;
            m_Neurons.resize(num);
        }

        QVector<Neuron> getNeurons(){return m_Neurons;}
        QVector<Neuron> Neurons()const{return m_Neurons;}


    };


}

#endif // AINEURONLAYER_H
