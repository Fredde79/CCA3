#ifndef DATA_H
#define	DATA_H
#include <string>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include "Location.h"
#include "Short_desc.h"
#include "TravelTable.h"
#include "Vocabulary.h"
#include "Object_desc.h"

using namespace std;

class Data : public Location, Short_desc, TravelTable, Vocabulary, Object_desc{
  
private:
    string line;
<<<<<<< HEAD
    /*SectionX reads each section into appropiate vector*/
=======
>>>>>>> new repo for CCA
    void sectionOne(fstream &file);
    void sectionTwo(fstream &file);
    void sectionThree(fstream &file);
    void sectionFour(fstream &file);
    void sectionFive(fstream &file);
     vector <Object_desc> sect5;
public:
    Data();
    virtual ~Data();
    void readFile();
};
#endif

