#include "pch.h"
#include "geraet.h"

bool geraet::schalten() {
	return true;
}

double geraet::gesamtVerbrauch(Strom power){
	return power.getVerbrauch();
}
