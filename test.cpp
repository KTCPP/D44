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
	double verbrauch = tool.gesamtVerbrauch(power);
	EXPECT_EQ(verbrauch, 1);
	tool.schalten();
	EXPECT_EQ(tool.gesamtVerbrauch(power), 2);
	tool.schalten();
	EXPECT_EQ(tool.gesamtVerbrauch(power), 3);
}

TEST(elektronik, schalten) {
	elektronik elek;
	EXPECT_EQ(elek.schalten(), false);
}

TEST(Strom, verbrauch) {
	Strom power;
	EXPECT_EQ(power.getVerbrauch(),0);
}