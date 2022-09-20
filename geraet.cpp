#include "pch.h"
#include "geraet.h"

bool geraet::schalten() {
	x++;
	return true;
}

double geraet::gesamtVerbrauch(Strom& power){
	return power.getVerbrauch()+x;
}
