#include <vector>
#include <string>
#include <string.h>
#include <iostream>

using namespace std;

#ifndef OBJECT_DESC_H
#define	OBJECT_DESC_H
class Object_desc{
private:
    int capacity;
    string message[];
    string inventory;
    //vector<string> sect5;
public:
    Object_desc();
    virtual ~Object_desc();
    void setMessage(int pos, string msg);
    string getMessage(int pos);
    string getInventory();
    void setInventory(string inv);
    
};


#endif	/* OBJECT_DESC_H */

