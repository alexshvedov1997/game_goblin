#pragma once

#include "gooblin.h"
#include <iostream>

class Hoggoblin : public Goblin {
	std::string spell;
public:
	Hoggoblin(const std::string& nm, int agl, int hl, int sp, int stn, int lvl, int dmg, int rng, const std::string& spll)
		:Goblin(nm, agl, hl, sp, stn, lvl, rng, dmg), spell(spll) {}
	void show() {
		Goblin::show();
		std::cout << " Spell: " << spell << "\n";
	}

};
