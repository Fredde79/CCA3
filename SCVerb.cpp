#include "SCVerb.h"


SCVerb::SCVerb(int number, string word, string comment)
:Vocabulary(number,word,comment)
{
}
SCVerb::~SCVerb(){}
const string SCVerb::toString()
{
    return this->show();
}
