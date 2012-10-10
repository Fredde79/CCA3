#include "TravelTable.h"


TravelTable::TravelTable(int motion, Location* from, Location* to)
{
    this->motion=motion;
    this->from=from;
    this->to=to;
}
TravelTable::~TravelTable(){}

int TravelTable::getMotion() const
{
    return this->motion;
}
Location *TravelTable::getFromLocation() const
{
    return this->from;
}
Location *TravelTable::getToLocation() const
{
    return this->to;
}
