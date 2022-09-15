#pragma once
#include "elektronik.h"
#include "Strom.h"
class geraet : public elektronik
{
public:
	bool schalten();
	double gesamtVerbrauch(Strom power);
};

