#include"Hint.h"

Hint::Hint(int condBit, int numOfTurns, int pointsToDeduct, Message* question, Message* hint) {
    this->condBit=condBit;
    this->numOfTurns = numOfTurns;
    this->pointsToDeduct = pointsToDeduct;
    this->read = false;
    this->question = question;
    this->hint = hint;
}
Hint::~Hint(){}
int Hint::getCondBit() const {
    return this->condBit;
}
int Hint::getNumOfTurns() const {
    return this->numOfTurns;
}
int Hint::getPointsToDeduct() const {
    return this->pointsToDeduct;
}
bool Hint::viewHint() const {
    return this->read;
}
void Hint::setRead(bool read) {
    this->read = read;
}
string Hint::getQuestion(bool empty) {
    if (this->question != NULL) {
        return this->question->getContent();
    } 
    else 
    {
        if (empty) 
        {
            return "";
        } 
        else 
        {
            return "No message";
        }
    }
}
Message* Hint::getQuestionObject() {
    return this->question;
}
string Hint::getHint(bool empty) {
    if (this->hint != NULL) {
        return this->hint->getContent();
    } 
    else 
    {
        if (empty) 
        {
            return "";
        } 
        else 
        {
            return "No message";
        }
    }
}
Message* Hint::getHintObject() {
    return this->hint;
}
string Hint::toString() {
    stringstream ss;
    ss << "Condition bit:" << endl << this->getCondBit() << endl << "Number of turns:" << endl << this->getNumberOfTurns() << endl;
    ss << "Points to deduct: " << endl << this->getPointsToDeduct() << endl << "Question:" << endl << this->getQuestion(false) << endl;
    ss << "Hint:" << endl << this->getHint(false) << endl;
    return ss.str();
}