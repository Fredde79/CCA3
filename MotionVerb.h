/* 
 * File:   MotionVerb.h
 * Author: fredrikhagg and Daniel Nilsson
 *
 */

#ifndef MOTIONVERB_H
#define	MOTIONVERB_H

#include <iostream>
#include <string>
#include "Vocabulary.h"


class MotionVerb : public Vocabulary{
    private:
        
    public:
        MotionVerb(int number, string word, string comment);
        MotionVerb(int number);
        ~MotionVerb();
    
        virtual const string toString();
};


#endif	/* MOTIONVERB_H */

