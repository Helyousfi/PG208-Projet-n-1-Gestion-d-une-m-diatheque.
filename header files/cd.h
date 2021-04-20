#ifndef CD_H
#define CD_H

#include "DVD.h"

using namespace std;

class CD : public DVD
{
private:
    string _titre;
public:
    CD();
    ~CD();
};




#endif