#pragma once
#include "elektronik.h"
class Strom :
    public elektronik
{
public:
    virtual double getVerbrauch();
private:
    double verbrauch = 0;
};

