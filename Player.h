/* 
 * File:   Player.h
 * Author: Fredrik Hägg and Daniel Nilsson
 *
 * Created on den 10 oktober 2012, 11:52
 */

#ifndef PLAYER_H
#define	PLAYER_H
#include <iostream>
#include <vector>
#include "Object_desc.h"
#include "Location.h"

class Player{
private:
    int score;
    Location* currLoc;
    vector<Object_desc*> *objects;
    
public:
    Player(Location* initLoc);
    virtual ~Player();
    int getScore() const;
    void setScore(int score);
    void addScore(int score);
    void setCurrLoc(Location* loc);
    Location* getCurrLoc() const;
    void pickObj(Object_desc* obj);
    void dropObj(Object_desc* obj);
    bool hasObj(Object_desc* obj) const;
    void removeObj(Object_desc* obj);
    vector<Object_desc*>* getObj() const;
    string toString();
};



#endif	/* PLAYER_H */

