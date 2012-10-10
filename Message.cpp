#include "Message.h"

Message::Message(int number, string content)
{
    this->number=number;
    this->content=content;
}
Message::Message(int number)
{
    this->number=number;
    this->content="";
}
Message::~Message(){}
int Message::getNr() const
{
    return this->number;
}
string Message::getContent()
{
    return this->content;
}
void Message::setNr(int number)
{
    this->number=number;
}
void Message::setContent(string content)
{
    this->content=content;
}
void Message::extendContent(string content)
{
    this->content += content + " ";
}
string Message::toString()
{
    stringstream message;
     message << "\n number: " << this->getNr() << "\n content: " << this->getContent() << endl;
    return message.str();
}