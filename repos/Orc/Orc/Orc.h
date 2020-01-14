#pragma once
#include "string"
using namespace std;

class Orc
{
private:
	string Name;
	static string Species;

public:
	Orc();
	Orc(string);
	string getName();
	string BattleCry();
	string warcry();
};
