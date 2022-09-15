#include "pch.h"
#include "geraet.h"
#include "elektronik.h"
#include "Strom.h"
#include "MockStrom.h"


TEST(geraet, schalten) {
	geraet tool;
	EXPECT_EQ(tool.schalten(), true);
}

TEST(geraet, verbrauch) {
	geraet tool;
	MockStrom power;
	EXPECT_EQ(power.getVerbrauch(), 1.0);
	double verbrauch = tool.gesamtVerbrauch(power);
	EXPECT_EQ(verbrauch, 1);
}

TEST(elektronik, schalten) {
	elektronik elek;
	EXPECT_EQ(elek.schalten(), false);
}

TEST(Strom, verbrauch) {
	Strom power;
	EXPECT_EQ(power.getVerbrauch(),0);
}