/* 
 * File:   MagicMsg.h
 * Author: Daniel Nilsson & Fredrik Hägg
 * 
 * SECTION 12
 */
#include "Message.h"
#ifndef MAGICMSG_H
#define	MAGICMSG_H
class MagicMsg : public Message
{
public:
MagicMsg(int number, string content);
MagicMsg(int number);
virtual ~MagicMsg();
string toString();

};


#endif	/* MAGICMSG_H */

