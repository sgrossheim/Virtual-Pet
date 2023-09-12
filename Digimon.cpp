#include "Digimon.h"

Digimon::Digimon(const string& digimonName, int happy, int hungry, string elem) : VirtualPet(digimonName)
{
	name = digimonName;
	happiness = happy;
	hunger = 
	element = elem;
}

void Digimon::useSpecialAttack()
{
	cout << "USING SPECIAL ATTACK" << endl;
}
