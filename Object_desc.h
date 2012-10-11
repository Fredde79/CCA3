#include <iostream>
#include <string>
#include <vector>
#include "Vocabulary.h"

using namespace std;

#ifndef OBJECT_DESC_H
#define	OBJECT_DESC_H
class Object_desc : public Vocabulary{
private:
    int propVal;
    string invMsg;
    vector<string> *descriptions;
    bool treasure;
    bool movable;
    bool lightable;
    bool lit;
public:
    Object_desc(int number, string word, string comment);
    ~Object_desc();
    int getPropVal() const;
    void setPropVal(int propVal);
    string getInvMsg() const;
    void setInvMsg(string msg);
    void setDescriptionsVector(vector<string> *NewVector);
    string getDescForPropVal(int n) const;
    string getPropDesc() const;
    string getCurrPropDesc();
    void addPropDesc(string desc);
    //void appendToPropertyDescription(const int n, const string desc);
    bool isTreasure() const;
    void setTreasure(bool treasure);
    bool isMovable() const;
    void setMovable(bool movable);
    bool isLightable() const;
    void setLightable(bool light);
    bool isLit() const;
    void setLit(bool light);
    virtual const string toString();
};


#endif	/* OBJECT_DESC_H */

