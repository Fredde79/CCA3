/* 
 * File:   Message.h
 * Author: Daniel Nilsson & Fredrik Hägg
 *
 * SECTION 5
 */
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#ifndef MESSAGE_H
#define	MESSAGE_H
class Message{
private:
    int number;
    string content;
public:
    Message(int number, string content);
    Message(int number);
    virtual ~Message();
    
    int getNr() const;
    string getContent();
    void setNr(int number);
    void setContent(string content);
    void extendContent(string content);
    virtual string toString();
    
};
#endif	/* MESSAGE_H */

