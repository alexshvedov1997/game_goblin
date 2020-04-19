#pragma once

#include "characterPattern.h"
#include "i_actions.h"

class Goblin :public Pattern, public IActions {
	int damage;
	int range;
public:
	Goblin(const std::string& nm, int agl, int hl, int sp, int stn, int lvl, int dmg,int rng):
		Pattern(nm,agl,hl,sp,stn,lvl),range(rng),damage(dmg){}
	virtual void show();
	void Atack();
	void Move();
};
