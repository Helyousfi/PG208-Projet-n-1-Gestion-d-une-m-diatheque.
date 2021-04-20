#ifndef DVD_H
#define DVD_H

#include "VHS.h"

using namespace std;


class DVD : public VHS
{
private :
    int nbre_pistes;

public :
    DVD();
    

    ~DVD();

};




#endif