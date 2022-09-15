#pragma once
#include "elektronik.h"
class Strom :
    public elektronik
{
public:
    virtual double getVerbrauch() {
        return verbrauch;
    }
private:
    double verbrauch = 0;
};

