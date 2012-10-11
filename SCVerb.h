/* 
 * File:   SCVerb.h
 * Author: Daniel Nilsson & Fredrik Hägg
 * Special case verb
 * Section 4
 *
 */
#include "Vocabulary.h"
#ifndef SCVERB_H
#define	SCVERB_H
class SCVerb : public Vocabulary{
    
public:
    SCVerb(int number, string word, string comment="");
    virtual ~SCVerb();
    virtual const string toString();
        
};

#endif	/* SCVERB_H */

