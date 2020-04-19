#include "gooblin.h"
#include <iostream>

void Goblin::show() {
	std::cout << "type" << "Goblin " << std::endl;
	std::cout << "Characteristic" << std::endl;
	std::cout << "Name: " << name << "\n" << "Attack: " << damage << "\n" << "Speed: " 
		<< speed << "\n"<< "Level: "<< level<<"\n";

}

void Goblin::Atack() {
	std::cout << "He has a sword." << "\n";
	std::cout << "He kicks. Current damage: " << damage << "\n";
}

void Goblin::Move() {
	std::cout << "He runs with speed: " << speed << "\n";
}