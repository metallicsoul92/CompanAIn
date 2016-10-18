#include "../../include/AI/AINeuralNet.h"

namespace clim{

QVector<double> NeuralNet::update(QVector<double> &inputs)
{

 //stores the resultant outputs from each layer

 QVector<double> outputs;

 int cWeight = 0;



 //first check that we have the correct amount of inputs

 if (inputs.size() != m_numInputs)

 {

   //just return an empty vector if incorrect.

   return outputs;

 }



 //For each layer....

 for (unsigned int i=0; i<m_numHiddenLayers + 1; ++i)

 {

   if ( i > 0 )

   {

     inputs = outputs;

   }



   outputs.clear();



   cWeight = 0;



   //for each neuron sum the (inputs * corresponding weights).Throw

   //the total at our sigmoid function to get the output.

   for (unsigned int j=0; j<m_Layers[i].getNumNeurons(); ++j)

   {

     double netinput = 0;



     int NumInputs = m_Layers[i].getNeurons()[j].getNumInputs();



     //for each weight

     for (unsigned int k=0; k<m_numInputs - 1; ++k)

     {

       //sum the weights x inputs

       netinput += m_Layers[i].getNeurons()[j].getVecWeight()[k] *

                   inputs[cWeight++];

     }



     //add in the bias

     netinput += m_Layers[i].getNeurons()[j].getVecWeight()[NumInputs-1] *

                 1.0;



     //we can store the outputs from each layer as we generate them.

     //The combined activation is first filtered through the sigmoid

     //function

     outputs.push_back(Sigmoid(netinput, 1));



     cWeight = 0;

   }

 }

 return outputs;

}




}
