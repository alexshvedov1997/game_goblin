#pragma once
#include "characterPattern.h"

class sortLevel {
public:
	bool operator () (Pattern & p1, Pattern & p2) {
		return p1 < p2;
	}
};