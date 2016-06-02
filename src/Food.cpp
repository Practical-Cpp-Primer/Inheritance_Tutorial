#include "Food.h"

Food::Food() {
	cooked = false;
}

Food::~Food() {};

bool Food::isCooked() {
	return cooked;
}
