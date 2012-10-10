#include "MagicMsg.h"

MagicMsg::MagicMsg(int number, string content)
:Message(number,content)
{
}
MagicMsg::MagicMsg(int number)
:Message(number)
{
}
MagicMsg::~MagicMsg(){}
string MagicMsg::toString()
{
    stringstream magic;
    magic << this->getNr() + this->getContent();
    return magic.str();
}
