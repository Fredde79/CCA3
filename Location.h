#include <vector>
#include <string>
#include <iostream>
#include "MotionVerb.h"
#include "Object_desc.h"
#include "Message.h"
#include "Hint.h"
#include "TravelTable.h"

using namespace std;

#ifndef LOCATION_H
#define	LOCATION_H
class Location{
private:
    //vector<string> sect1; /*long description*/
    int number;
    int location;
    int numberOfVisits;
    string shortDesc;
    string longDesc;
    vector<Object_desc*> *objects;
    
    vector<bool> sect9; //liquid assets etc
    vector<Hint*> *hints;
    vector<Location*> *accessibleLocations;
    vector<vector<MotionVerb*>*> *motionVerbs;
    vector<Message*> *printMessages;
    vector<vector<MotionVerb*>*> *mvPrint;
    vector<TravelTable*> *traveltable;
    //void init(int number = -1, string longDescription = "", string shortDescription = "");
    const int getAccessibleLocationIndex(Location* loc) const;
    const int getPrintMessageIndex(Message* msg) const;
    string listObjects() const;
    string getAccNmotionverb() const;
    string printMessagesNmotionverb() const;
    string getSect9() const; //assets
    string getSect11();//hints
     
    
public:
    Location();
    Location(int number);
    Location(int number, string longDesc);
    Location(int number, string longDesc, string shortDesc);
    virtual ~Location();
    void appendShortDesc(const string desc);
    void appendLongDesc(const string desc);
    int getNumber() const;
    void setNumber(int number);
    int getNumberOfVisits() const;
    void visit();
    string getShortDesc() const;
    void setShortDesc(string desc);
    string getLongDesc() const;
    void setLongDesc(string desc);
 
     void addObject(Object_desc* obj);
     bool hasObject(Object_desc* obj) const;
     void removeObject(Object_desc* obj);
     vector<Object_desc*>* getObjects() const;
    
    bool isAsset(int index) const;
    void setAsset(const int index, const bool value = true);
    void addHint(Hint* h);
    vector<Hint*>* getHints() const;
    void addAccessibleLocation(Location* loc);
    void addMotionVerb(Location* loc, MotionVerb* verb);
    Location* shouldGoToLocation(MotionVerb* verb);
    void addPrintMessage(Message* msg);
    void addMotionVerbForPrintMessage(Message* msg, MotionVerb* verb);
    Message* shouldPrintMessage(MotionVerb* verb);
    void addLocationCondition(TravelTable* tt);
    TravelTable* travelTableLocation(Location* loc) const;
    string toString();
    

};
#endif	/* LOCATION_H */

