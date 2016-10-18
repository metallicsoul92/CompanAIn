#ifndef STATEUTILS_H
#define STATEUTILS_H

#include <QtCore>
#include "CTriple.h"
#include "CTuple.h"

namespace clim{

    enum class syntaxPart{
        spVerb,//words like "is","left", "want"
        spNoun,// words which represent things like people
        spAdj,//words which describe a noun
        spAdv,//words that describe how an action is done
        spDet,// Words like "The" ,"a", or "some"
        spPrep,//Words that come before locations.
               //like "in", "from", or "behind"
        spCoord,//Coordinator,words like "and",
                //"or", or "but"
        spSub //Subordinator, words like "that",
               //"whether", or "if"

    };

    enum class syntaxPhrase{
        VerbPhrase, //phrase like "She [wrote some letters]"
        NounPhrase, //phrase like "[The new intern] came to work"
        AdjectivePhrase,//phrase like "Its getting [rather late]"
        AdverbPhrase,//phrase like "I spoke [too soon]"
        DeterminativePhrase,//phrase like " I saw [almost every] card"
        PrepositionPhrase//phrase like "They're [in the garden]"
    };
    enum class syntaxClausePart{
        Subject,// "[The new mailman] got to work early"
        Predicate//"One of his friends [called a doctor]"
    };
}

#endif // STATEUTILS_H
