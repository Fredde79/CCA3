#include "MotionVerb.h"

MotionVerb::MotionVerb(int number, string word, string comment)
        :Vocabulary(number, word, comment)
{
    
}
MotionVerb::MotionVerb(int number)
: Vocabulary(number, "", "")
{
    
}
MotionVerb::~MotionVerb() {}

string MotionVerb::toString() {
    //return "Type: MotionVerb\n" + this->showSpec();
}
