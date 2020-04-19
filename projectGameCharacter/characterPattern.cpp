#include "characterPattern.h"

bool Pattern::operator < (Pattern& pat) {
	return level < pat.level;
}

bool Pattern::operator > (Pattern& pat) {
	return level > pat.level;
}

bool Pattern::operator == (Pattern& pat) {
	return level == pat.level;
}

bool Pattern::operator != (Pattern& pat) {
	return level != pat.level;
}