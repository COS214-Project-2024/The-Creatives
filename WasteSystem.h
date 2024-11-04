#ifndef WASTESYSTEM_H
#define WASTESYSTEM_H

#include <iostream>
#include "Utility.h"
using namespace std;

class WasteSystem: public Utility{
    private:
        double Kilograms;
        int numOftrucks;
    public:
        WasteSystem(double Kilograms,int numOftrucks);
         bool flag();
        void update();
        void useResources(double used);
    
};

#endif