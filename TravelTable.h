/* 
 * File:   TravelTable.h
 * Author: Daniel Nilsson
 * Section 3
 * Travel table
 *
*/
#include <iostream>

using namespace std;


#ifndef TRAVELTABLE_H
#define	TRAVELTABLE_H
class TravelTable{
private:
    int motion;
    Location *from;
    Location *to;
public:
    TravelTable(int motion,Location *from, Location *to);
    virtual ~TravelTable();
    int getMotion() const;
    Location* getFromLocation() const;
    Location* getToLocation() const;
    
};
#endif	/* TRAVELTABLE_H */

