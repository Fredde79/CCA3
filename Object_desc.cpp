#include "Object_desc.h"


Object_desc::Object_desc(){
    this->capacity = 5;
    this->message[this->capacity];
    for(int i=0; i<this->capacity; i++){
        this->message[i]="";
    }
    this->inventory="";
}
Object_desc::~Object_desc(){
    /*
    for(int i=0; i<this->capacity; i++){
        delete this->message[i];
    }
    */
    delete []this->message;

}
string Object_desc::getMessage(int pos)
{
    return this->message[pos];
}
void Object_desc::setMessage(int pos, string msg)
{
    this->message[pos]=msg;
}
string Object_desc::getInventory()
{
    return this->inventory;
}
void Object_desc::setInventory(string inv)
{
    this->inventory=inv;
}

