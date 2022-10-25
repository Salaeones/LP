#pragma once
#include <iostream>
#include "PuntDeInteresBase.h"


class PuntDeInteresBotigaSolucio : public PuntDeInteresBase
{

public:
	std::string getName();
	unsigned int getColor();


private:
	std::string m_shop;
	std::string m_wheelchair;
	std::string m_opening_hours;
};

