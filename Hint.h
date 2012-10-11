/* 
 * File:   Hint.h /Section 11
 * Author: Fredrik Hägg och Daniel Nilsson
 * 
 * 

 */

#ifndef HINT_H
#define	HINT_H

#include <iostream>
#include "Message.h"

class Hint{
private:
    int condBit;
    int numOfTurns;
    int pointsToDeduct;
    bool read;
    Message* question;
    Message* hint;
    
public:
    Hint(int condBit, int numOfTurns, int pointsToDeduct, Message* question, Message* hint);
    virtual ~Hint();
    int getCondBit() const;
    int getNumOfTurns() const;
    int getPointsToDeduct() const;
    bool viewHint() const;
    void setRead(bool r);
    string getQuestion(bool empty=true);
    Message* getQuestionObject();
    string getHint(bool empty=true);
    Message* getHintObject();
    string toString();
};


#endif	/* HINT_H */

