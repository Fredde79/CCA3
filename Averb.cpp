#include "AVerb.h"


Averb::Averb(int number, string word, string comment)
:Vocabulary(number, word, comment)
{
    this->msg=NULL;
}
Averb::~Averb(){}

void Averb::setMessage(Message* msg)
{
    this->msg=msg;
}
string Averb::getMessage()
{
    if(this->msg !=NULL)
        return this->msg->getContent();
    else
        return "no msg object";
}
Message* Averb::getMsgObject()
{
    return this->msg;
}
const string Averb::toString()
{
    return this->getMessage() + this->show();
}