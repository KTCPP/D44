#pragma once
#include "Strom.h"
class MockStrom : public Strom {
public:
    double getVerbrauch() override;
};

