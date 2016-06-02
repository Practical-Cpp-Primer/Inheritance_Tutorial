#include "Food.h"

/*!
 * Default constructor. cooked is set to false.
 */
Food::Food() {
	cooked = false;
}

Food::~Food() {};

/*!
 * Returns status of food.
 * @return true if food is cooked, false if not.
 */
bool Food::isCooked() {
	return cooked;
}
