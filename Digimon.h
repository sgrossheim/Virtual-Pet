#ifndef DIGIMON_H
#define DIGIMON_H
#include "VirtualPet.h"

class Digimon : public VirtualPet
{
	private:
		string element;
	public:
		Digimon(const string& digimonName, int happy, int hungry, string elem);
		void useSpecialAttack();
};
#endif
