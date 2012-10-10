#include "Location.h"

Location::Location(){
    this->location=0;
    this->longDesc="";
    this->number=0;
    this->numberOfVisits=0;
    this->shortDesc="";
    this->sect1=new vector<string>();
}
Location::Location(int number){
    this->location=0;
    this->longDesc="";
    this->number=number;
    this->numberOfVisits=0;
    this->shortDesc="";
    this->sect1=new vector<string>();
}
Location::Location(int number, string longDesc){
    this->location=0;
    this->longDesc=longDesc;
    this->number=number;
    this->numberOfVisits=0;
    this->shortDesc="";
    this->sect1=new vector<string>();
}
Location::Location(int number, string longDesc, string shortDesc){
    this->location=0;
    this->longDesc=longDesc;
    this->number=number;
    this->numberOfVisits=0;
    this->shortDesc=shortDesc;
    this->sect1=new vector<string>();
}
Location::~Location(){
    
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
