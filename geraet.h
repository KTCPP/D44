#pragma once
#include "elektronik.h"
#include "Strom.h"
#include "MockStrom.h"
class geraet : public elektronik
{
public:
	bool schalten();
	double gesamtVerbrauch(Strom& power);
private:
	double x=0;
};

