
#include <vector>
#include <string>
#include <string.h>
#include <iostream>


using namespace std;

#ifndef LOCATION_H
#define	LOCATION_H
class Location{
private:
    vector<string> sect1; /*long description*/
    int number;
    int location;
    int numberOfVisits;
    string shortDesc;
    string longDesc;
    //vector<Object_desc*> *objects;
    /**
     * Todo vector<bool> assets;
     * vector<Hint*> *hints;
     * vector<Location*> *accessibleLocations;
       vector<vector<MotionVerb*>*> *motionVerbs;
     * vector<Message*> *printMessages;
     * vector<vector<MotionVerb*>*> *motionVerbsForPrintingMessage;
     * vector<LocationCondition*> *locationConditions;
     * void init(int number = -1, string longDescription = "", string shortDescription = "");
     * const int getAccessibleLocationIndex(Location* loc) const;
     * const int getPrintMessageIndex(Message* msg) const;
     * string listObjects() const;
     * string getAccessibleLocationsAndMotionVerbsAsString() const;
     * string getPrintMessagesAndMotionVerbsAsString() const;
     * string getAssetsAsString() const;
     * string getHintsAsString();
     */
    
public:
    Location();
    Location(int number);
    Location(int number, string longDesc);
    Location(int number, string longDesc, string shortDesc);
    ~Location();
    int getNumber() const;
    void setNumber(int number);
    int getNumberOfVisits() const;
    void visit();
    string getShortDesc() const;
    void setShortDesc(string desc);
    string getLongDesc() const;
    void setLongDesc(string desc);
    /**
     Todo: void addObject(Object* obj);
     * bool hasObject(Object* obj) const;
     * void removeObject(Object* obj);
     * vector<Object*>* getObjects() const;
    
     * bool isAsset(int index) const;
     * void setAsset(const int index, const bool value = true);
     * void addHint(Hint* h);
     * vector<Hint*>* getHints() const;
     * void addAccessibleLocation(Location* loc);
     * void addMotionVerb(Location* loc, MotionVerb* verb);
     * Location* shouldGoToLocation(MotionVerb* verb);
     * void addPrintMessage(Message* msg);
     * void addMotionVerbForPrintMessage(Message* msg, MotionVerb* verb);
     * Message* shouldPrintMessage(MotionVerb* verb);
     * void addLocationCondition(LocationCondition* locC);
     * LocationCondition* getLocationConditionForLocation(Location* loc) const;
     * string toString();**/
    

};
#endif	/* LOCATION_H */

