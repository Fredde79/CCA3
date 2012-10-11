#include "Location.h"

Location::Location(){
    this->location=0;
    this->longDesc="";
    this->number=0;
    this->numberOfVisits=0;
    this->shortDesc="";
    this->objects=new vector<Object_desc*>();
    this->sect9=vector<bool>();
    for(int i=0; i<10; i++)
        this->sect9.push_back(false);
    this->hints=new vector<Hint*>();
    this->accessibleLocations=new vector<Location*>();
    this->motionVerbs = new vector<vector<MotionVerb*>*>();
    this->printMessages = new vector<Message*>();
    this->mvPrint = new vector<vector<MotionVerb*>*>();
    this->traveltable=new vector<TravelTable*>();
    
}
Location::Location(int number){
    this->location=0;
    this->longDesc="";
    this->number=number;
    this->numberOfVisits=0;
    this->shortDesc="";
    this->objects=new vector<Object_desc*>();
    this->sect9=vector<bool>();
    for(int i=0; i<10; i++)
        this->sect9.push_back(false);
    this->hints=new vector<Hint*>();
    this->accessibleLocations=new vector<Location*>();
    this->motionVerbs = new vector<vector<MotionVerb*>*>();
    this->printMessages = new vector<Message*>();
    this->mvPrint = new vector<vector<MotionVerb*>*>();
    this->traveltable=new vector<TravelTable*>();
}
Location::Location(int number, string longDesc){
    this->location=0;
    this->longDesc=longDesc;
    this->number=number;
    this->numberOfVisits=0;
    this->shortDesc="";
    this->objects=new vector<Object_desc*>();
    this->sect9=vector<bool>();
    for(int i=0; i<10; i++)
        this->sect9.push_back(false);
    this->hints=new vector<Hint*>();
    this->accessibleLocations=new vector<Location*>();
    this->motionVerbs = new vector<vector<MotionVerb*>*>();
    this->printMessages = new vector<Message*>();
    this->mvPrint = new vector<vector<MotionVerb*>*>();
    this->traveltable=new vector<TravelTable*>();
}
Location::Location(int number, string longDesc, string shortDesc){
    this->location=0;
    this->longDesc=longDesc;
    this->number=number;
    this->numberOfVisits=0;
    this->shortDesc=shortDesc;
    this->objects=new vector<Object_desc*>();
    this->sect9=vector<bool>();
    for(int i=0; i<10; i++)
        this->sect9.push_back(false);
    this->hints=new vector<Hint*>();
    this->accessibleLocations=new vector<Location*>();
    this->motionVerbs = new vector<vector<MotionVerb*>*>();
    this->printMessages = new vector<Message*>();
    this->mvPrint = new vector<vector<MotionVerb*>*>();
    this->traveltable=new vector<TravelTable*>();
}
Location::~Location(){
    for(int i=0; i<this->motionVerbs->size(); i++)
    {
        delete this->motionVerbs->at(i);
    }
    delete this->motionVerbs;
    delete this->accessibleLocations;
    
    for(int i=0; i<this->mvPrint->size(); i++)
    {
        delete this->mvPrint->at(i);
    }
    delete this->mvPrint;
    delete this->printMessages;
    delete this->objects;
    delete this->hints;
    delete this->traveltable;
}
int Location::getNumber() const{
    return this->number;
}
void Location::setNumber(int number){
    this->number=number;
}
int Location::getNumberOfVisits() const{
    return this->numberOfVisits;
}
void Location::visit(){
    this->numberOfVisits++;
}
string Location::getShortDesc() const{
    return this->shortDesc;
}
void Location::setShortDesc(string desc){
    this->shortDesc=desc;
}
string Location::getLongDesc() const{
    return this->longDesc;
}
void Location::setLongDesc(string desc){
    this->longDesc=desc;
}
void Location::addObject(Object_desc* obj)
{
    this->objects->push_back(obj);
}
bool Location::hasObject(Object_desc* obj) const
{
    for(int i=0; i<this->objects->size(); i++)
    {
        if(this->objects->at(i) == obj)
        {
            return true;
        }           
    }
    return false;
}
void Location::removeObject(Object_desc* obj)
{
    bool check = false;
    for (int i = 0; i < this->objects->size() && !check; i++) {
        if (this->objects->at(i) == obj) {
            this->objects->erase(this->objects->begin()+i);
            check = true;
        }
    }    
}
vector <Object_desc*>* Location::getObjects() const
{
    return this->objects;
}
bool Location::isAsset(int index) const
{
    return this->sect9.at(index);
}
void Location::setAsset(const int index, const bool value)
{
    if(index >= 0 && index < 10)
        this->sect9.at(index) = value;
    else
        cerr << "asset was unable to set";
}
void Location::addHint(Hint* h)
{
 this->hints->push_back(h);   
}
vector<Hint*>* Location::getHints() const
{
    return this->hints;
}
void Location::addAccessibleLocation(Location* loc)
{
    if(this->getAccessibleLocationIndex(loc) == -1)
    {
        this->accessibleLocations->push_back(loc);
        this->motionVerbs->push_back(new vector<MotionVerb*>());
        
    }
}
void Location::addMotionVerb(Location* loc, MotionVerb* verb)
{
    int i= this->getAccessibleLocationIndex(loc);
    this->motionVerbs->at(i)->push_back(verb);
}
Location* Location::shouldGoToLocation(MotionVerb* verb)
{
    for(int i=0; i<this->motionVerbs->size(); i++)
    {
        for(int k=0; k<this->motionVerbs->at(i)->size(); k++)
        {
            if(this->motionVerbs->at(i)->at(k) == verb)
            {
                return this->accessibleLocations->at(i);
            }
        }
    }
    return NULL;
}
void Location::addPrintMessage(Message* msg) 
{
    if (this->getPrintMessageIndex(msg)) {
        this->printMessages->push_back(msg);
        this->mvPrint->push_back(new vector<MotionVerb*>());
    }
}
void Location::addMotionVerbForPrintMessage(Message* msg, MotionVerb* verb) 
{
    int index = this->getPrintMessageIndex(msg);
    this->mvPrint->at(index)->push_back(verb);
}
Message* Location::shouldPrintMessage(MotionVerb* verb) {
    for (int i = 0; i < this->mvPrint->size(); i++) {
        for (int x = 0; x < this->mvPrint->at(i)->size(); x++) {
            
            if (this->mvPrint->at(i)->at(x) == verb) {
                return this->printMessages->at(i);
            }
        }
    }
    return NULL;
}

void Location::addLocationCondition(TravelTable *locC) {
    
}
TravelTable* Location::travelTableLocation(Location *loc) const {
    for (int i = 0; i < this->traveltable->size(); i++) {
        // OK to compare pointers
        if (this->traveltable->at(i)->getToLocation() == loc) {
            return this->traveltable->at(i);
        }
    }
    return NULL;
}

string Location::listObjects() const {
    stringstream s;
    if (this->objects->size() > 0) {
        for (int i = 0; i < this->objects->size(); i++) {
            s << this->objects->at(i)->getNr() << ":[" << this->objects->at(i)->getWords() << "]";
            if (i != this->objects->size()-1) {
                s << " ";
            }
        }
    } else {
        s << "empty";
    }
    return s.str();
}

const int Location::getAccessibleLocationIndex(Location* loc) const {
    for (int i = 0; i < this->accessibleLocations->size(); i++) {
        if (this->accessibleLocations->at(i)->getNumber() == loc->getNumber()) {
            return i;
        }
    }
    return -1;
}
const int Location::getPrintMessageIndex(Message *msg) const {
    for (int i = 0; i < this->printMessages->size(); i++) {
        if (this->printMessages->at(i)->getNr() == msg->getNr()) {
            return i;
        }
    }
    return -1;
}

string Location::getAccNmotionverb() const {
    stringstream ss;
    ss << "Accessible locations:" << endl;
    if (this->accessibleLocations->size() > 0) {
        for (int i = 0; i < this->accessibleLocations->size(); i++) {
            ss << this->accessibleLocations->at(i)->getNumber() << " [" << this->accessibleLocations->at(i)->getShortDesc() << "]" << endl;
            ss << "\tMotionVerbs:" << endl;
            if (this->motionVerbs->at(i)->size() > 0) {
                for (int x = 0; x < this->motionVerbs->at(i)->size(); x++) {
                    ss << "\t\t" << this->motionVerbs->at(i)->at(x)->getNr() << ": " << this->motionVerbs->at(i)->at(x)->getWords() << endl;
                }
            } else {
                ss << "\t" << "<none>" << endl;
            }
        }
    } else {
        ss << "<none>" << endl;
    }
    return ss.str();
}
string Location::printMessagesNmotionverb() const {
    stringstream ss;
    ss << "Print messages:" << endl;
    if (this->printMessages->size() > 0) {
        for (int i = 0; i < this->printMessages->size(); i++) {
            ss << this->printMessages->at(i)->getNr() << " [" << this->printMessages->at(i)->getContent() << "]" << endl;
            ss << "\tMotionVerbs:" << endl;
            if (this->mvPrint->at(i)->size() > 0) {
                for (int x = 0; x < this->mvPrint->at(i)->size(); x++) {
                    ss << "\t\t" << this->mvPrint->at(i)->at(x)->getNr() << ": " << this->mvPrint->at(i)->at(x)->getWords() << endl;
                }
            } else {
                ss << "\t" << "<none>" << endl;
            }
        }
    } else {
        ss << "empty" << endl;
    }
    return ss.str();
}
string Location::getSect9() const const {
    stringstream ss;
    ss << "Assets:" << endl;
    for (int i = 0; i < this->sect9.size(); i++) {
        ss << "\t" << i << ": " << (this->sect9.at(i) ? "true" : "false") << endl;
    }
    return ss.str();
}
string Location::getSect11() {
    stringstream ss;
    ss << "Hints:" << endl;
    if (this->hints->size() > 0) {
        for (int i = 0; i < this->hints->size(); i++) {
            if (this->hints->at(i)->getHintObject() != NULL) {
                ss << "\t" << this->hints->at(i)->getHintObject()->getNr() << ": " << this->hints->at(i)->getHintObject()->getContent() << endl;
            }
        }
    } else {
        ss << "\t NONE" << endl;
    }
    return ss.str();
}

string Location::toString() {
    stringstream s;
    s << "Id: " << this->getNumber() << endl << "Short description:" << endl << (this->getShortDesc() == "" ? "<empty>" : this->getShortDesc()) << endl << "Long description:" << endl << this->getLongDesc() << endl << "Objects:" << endl << this->listObjects() << endl << this->getHints() << this->getAccNmotionverb() << this->printMessagesNmotionverb() << this->getSect9();
    return s.str();
}