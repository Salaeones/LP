#pragma once

#include <string>
#include "Common.h"

class PuntDeInteresBase {

	protected:
		Coordinate m_coord;
		std::string m_name;
		


	public:		
		PuntDeInteresBase();
		PuntDeInteresBase(Coordinate coord, std::string name);

		virtual std::string getName();
		Coordinate getCoord();
		virtual unsigned int getColor();

};