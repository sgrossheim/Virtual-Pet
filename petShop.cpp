#include "VirtualPet.h"
#include "Pokemon.h"

int main() 
{
	VirtualPet myLittleBoringPet("Basic Pet");
	myLittleBoringPet.feed();
	myLittleBoringPet.play();
	myLittleBoringPet.makeSound();

	cout << "Name: " << myLittleBoringPet.getName() << endl;
	cout << "Happiness: " << myLittleBoringPet.getHappiness() << endl;
	cout << "Hunger: " << myLittleBoringPet.getHunger() << endl;

	Pokemon pokeManz("Pokemanz", "Pokespeez");
	pokeManz.feed();
	pokeManz.play();
	pokeManz.makeSound();

	cout << "Name: " << pokeManz.getName() << endl;
	cout << "Happiness " << pokeManz.getHappiness() << endl;
	cout << "Hunger: " << pokeManz.getHunger() << endl;
	cout << "Health: " << pokeManz.getHealth() << endl;
	cout << "Species " << pokeManz.getSpecies() << endl;

	return 0;
}
