#pragma once
#include <iostream>
#include "PuntDeInteresBase.h"

class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase
{

public:
	std::string getName();
	unsigned int getColor();


private:
	std::string m_cuisine;
	std::string m_wheelchair;
};

