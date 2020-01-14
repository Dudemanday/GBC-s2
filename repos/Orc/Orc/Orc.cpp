#include "Orc.h"
#include "string"
using namespace std;

class Orc
{
private: //properties
	string Name;
	static string Species;

private: //methods
	//default constructor
	Orc(string name)
	{
		Name = name;
		Species = "ORC";
	}

	//getter for name
	string getName()
	{
		return Name;
	}

	//returns a simple battlecry
	string BattleCry()
	{
		return "I am " + Name + ", and I am a proud " + Species + "!";
	}

	//returns a simple warcry
	string warcry()
	{
		return "HRrrrrrr";
	}
};