#include "Orc.h"
#include "string"
using namespace std;
	
	//getter for name
	string Orc::getName() const {return this->Name;}

	//returns a simple battlecry
	string Orc::BattleCry() const
	{
		return "I am " + this->Name + ", and I am a proud " + this->Species + "!";
	}

	//returns a simple warcry
	string Orc::warcry() const {return "Hrrrrrrr";}
