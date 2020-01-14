#pragma once
#include "string"
using namespace std;

class Orc
{
private:
	string Name;
	static string Species;

public:
	Orc(string name){this->Name = name;}
	static void setSpecies(string species){Species = species;}
	string getName() const;
	string BattleCry() const;
	string warcry() const;
};
