#ifndef DATA_H
#define	DATA_H
#include <string>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>

/*Classes*/
/*Location*/
#include "Location.h"
#include "TravelTable.h"
/*vocabulary*/
#include "Vocabulary.h"
#include "AVerb.h"
#include "Object_desc.h"
#include "Message.h"
#include "ClassMsg.h"
#include "MagicMsg.h"

#include "MotionVerb.h"
#include "SCVerb.h"
#include "Hint.h"
using namespace std;

class Data {
  
private:
    string line;
    vector<Loc
    /*SectionX reads each section into appropiate vector*/
    void sectionOne(fstream &file);
    void sectionTwo(fstream &file);
    void sectionThree(fstream &file);
    void sectionFour(fstream &file);
    void sectionFive(fstream &file);
public:
    Data();
    virtual ~Data();
    void readFile();
};
#endif

