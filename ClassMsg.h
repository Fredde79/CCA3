/* 
 * File:   ClassMsg.h
 * Author: Daniel Nilsson
 *
 * SECTION 10
 */
#include "Message.h"

#ifndef CLASSMSG_H
#define	CLASSMSG_H
class ClassMsg : public Message{
    public:
        ClassMsg(int number, string content);
        ClassMsg(int number);
        virtual ~ClassMsg();
        string toString();
};


#endif	/* CLASSMSG_H */

