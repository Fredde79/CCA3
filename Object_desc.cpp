#include <sstream>

#include "Object_desc.h"


Object_desc::Object(int number, string word, string comment)
: Vocabulary(number,word,comment)
{
    this->invMsg="";
    this->lightable=false;
    this->lit=false;
    this->movable=true;
    this->propVal=0;
    this->invMsg="";
    this->descriptions=new vector<string>();
}
Object_desc::~Object(){
    delete this->descriptions;
}
int Object_desc::getPropVal() const{
    return this->propVal;
}
void Object_desc::setPropVal(int propVal){
    this->propVal=propVal;
}
string Object_desc::getInvMsg() const{
    return this->invMsg;
}
void Object_desc::setInvMsg(string msg){
    this->invMsg=msg;
}
void Object_desc::setDescriptionsVector(vector<string>* NewVector){
    delete this->descriptions;
    this->descriptions=NewVector;
}
string Object_desc::getDescForPropVal(int n) const{
    if(this->descriptions->size() > n){
        return this->descriptions->at(n);
    }
    return "";
}
string Object_desc::getPropDesc() const{
    stringstream stream;
    for(int i=0; i<this->descriptions->size(); i++){
        stream<<endl<<"\t"<<i<<": "<<this->descriptions->at(i);
    }
    return stream.str();
}
string Object_desc::getCurrPropDesc(){
    if(this->descriptions->size() > this->propVal){
        return this->descriptions->at(this->propVal);
    }
    return ">$<";
}
void Object_desc::addPropDesc(string desc){
    this->descriptions->push_back(desc);
}
bool Object_desc::isTreasure() const{
    return this->treasure;
}
void Object_desc::setTreasure(bool treasure){
    this->treasure=treasure;
}
bool Object_desc::isMovable() const{
    return this->movable;
}
void Object_desc::setMovable(bool movable){
    this->movable=movable;
}
bool Object_desc::isLightable() const{
    return this->lightable;
}
void Object_desc::setLightable(bool light){
    this->lightable=light;
}
bool Object_desc::isLit() const{
    return this->lit;
}
void Object_desc::setLit(bool light){
    this->lit=light;
}
string Object_desc::toString(){
    //return "Type: Object\n" + this->showSpec() + "Treasure:\n" + (this->isTreasure() ? "Yes" : "No") + "\nMovable:\n" + (this->isMovable() ? "Yes" : "No") + "\nInventory message:\n" + this->getInventoryMessage() + "\nProperty descriptions:" + this->getPropertyDescriptions();
}


