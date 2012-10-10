/* 
 * File:   AVerb.h
 * Author: Daniel Nilsson & Fredrik Hägg
 *
 */
#include <iostream>
#include <string>
#include "Vocabulary.h"
#include "Message.h"

#ifndef AVERB_H
#define	AVERB_H
class Averb: public Vocabulary{
private:
    Message *msg;
public:
    Averb(int number, string word, string comment);
    virtual ~Averb();
    void setMessage(Message *msg);
    string getMessage();
    Message* getMsgObject();
    const string toString();
    
};
#endif	/* AVERB_H */
