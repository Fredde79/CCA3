#include "ClassMsg.h"

ClassMsg::ClassMsg(int number, string content)
:Message(number,content)
{
}
ClassMsg::ClassMsg(int number)
:Message(number)
{
}
ClassMsg::~ClassMsg(){}
string ClassMsg::toString()
{
    stringstream msg;
    msg << this->getNr() + this->getContent();
    return msg.str();
}
