#ifndef AINEURALNET_H
#define AINEURALNET_H


#include "AINeuronLayer.h"

namespace clim{

    class NeuralNet{
    private:
        unsigned int m_numInputs;
        unsigned int m_numOutputs;
        unsigned int m_numHiddenLayers;
        unsigned int m_numPerHiddenLayer;

        QVector<NeuronLayer> m_Layers;


    public:
        NeuralNet();
        void createNet();

        QVector<double> getWeights()const;
        int getNumberofWeights()const;
        void putWeights(QVector<double> &weights);
        QVector<double> update(QVector<double> &inputs);

        inline double sigmoid(double activate,double response);

    };


}


#endif // AINEURALNET_H
