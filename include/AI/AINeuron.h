#ifndef AINEURON_H
#define AINEURON_H

#include <QVector>

namespace clim{

static float randomFloatClamp(float a, float b) {
    float random = ((float) rand()) / (float) RAND_MAX;
    float diff = b - a;
    float r = random * diff;
    return a + r;
    }

    enum class NeuronType{
        INPUTNODE,
        HIDDENNODE,
        OUTPUTNODE,
    };

    class Neuron{

    private:

        //number of inputs into neuron
        unsigned int m_numInputs;

        //Type of Neuron
        NeuronType m_type;


        //weights of inputs
        QVector<double> m_vecWeight;

    public:
        Neuron(unsigned int numInputs);
        Neuron(unsigned int numInputs,NeuronType type);

        unsigned int getNumInputs(){return m_numInputs;}
        unsigned int NumInputs()const{return m_numInputs;}

        NeuronType getType(){return m_type;}
        NeuronType Type()const{return m_type;}

        QVector<double> getVecWeight(){return m_vecWeight;}
        QVector<double> VecWeight()const{return m_vecWeight;}




    };


}


#endif // AINEURON_H
