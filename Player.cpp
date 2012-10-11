#include "Player.h"

Player::Player(Location* initLoc){
    this->score=0;
    this->currLoc = initLoc;
    this->objects = new vector<Object_desc*>();
}
Player::~Player(){
    delete this->objects;
}
int Player::getScore() const{
    return this->score;
}
void Player::addScore(int score){
    this->score+=score;
}
void Player::setScore(int score){
    this->score=score;
}
void Player::setCurrLoc(Location* loc){
    this->currLoc=loc;
    loc->visit();
}
Location* Player::getCurrLoc() const{
    return this->currLoc;
}
void Player::pickObj(Object_desc* obj){
    this->objects->push_back(obj);
}
void Player::dropObj(Object_desc* obj){
    bool ok=false;
    
    for(int i=0; i<this->objects->size() && !ok; i++){
        if(this->objects->at(i) == obj)
        {
            this->objects->erase(this->objects->begin()+i);
            ok = true;
        }
    }
}
bool Player::hasObj(Object_desc* obj) const{
    bool ok = false;
    
    for(int i=0; this->objects->size() && !ok; i++){
        if(this->objects->at(i))
        {
            ok = true;
        }
    }
    return ok;
}
void Player::removeObj(Object_desc* obj){
    bool del=false;
    
    for(int i =0; i<this->objects->size() && !del; i++){
        if(this->objects->at(i) == obj)
        {
            this->objects->erase(this->objects->begin()+i);
            del=true;
        }
    }
}
vector<Object_desc*>* Player::getObj() const{
    return this->objects;
}