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
    msg << "Number:" << endl << this->getNr() << endl << "Content:" << endl << this->getContent() << endl;
    return msg.str();
}
