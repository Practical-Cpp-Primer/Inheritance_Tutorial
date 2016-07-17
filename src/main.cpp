#include "Bananas.h"
#include "Bread.h"
#include "Eggs.h"
#include "Pancakes.h"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void prepare(vector<Food*> itemsToCook);
void checkPreparedness(vector<Food*> itemsToCook);

int main(int argc, char const *argv[]){
	// Initialize foods
	Bananas banana;
	Bread bread;
	Eggs eggs;
	Pancakes pancakes;
	
	// Add foods to vector of foods
	vector<Food*> foodVec;
	foodVec.push_back(&banana);
	foodVec.push_back(&bread);
	foodVec.push_back(&eggs);
	foodVec.push_back(&pancakes);

	// Check preparedness of foods, prepare foods, then check again
	checkPreparedness(foodVec);
	prepare(foodVec);
	checkPreparedness(foodVec);
	return 0;
}

/*!
 * Cooks list of food. 
 * @param itemsToCook List of items to cook.
 */
void prepare(vector<Food*> itemsToCook) {
	for (vector<Food*>::iterator i = itemsToCook.begin(); i != itemsToCook.end(); ++i) {
		(*i) -> cookFood();
	}
}

/*!
 * Checks to see if food in list of food is prepared.
 * @param itemsToCook List of items to check.
 */
void checkPreparedness(vector<Food*> itemsToCook) {
	for (vector<Food*>::iterator i = itemsToCook.begin(); i != itemsToCook.end(); ++i)	 {
		cout << "Food is cooked: " << (*i) -> isCooked() << endl;
	}
}

	// for (auto &i : itemsToCook) {
	// 	i -> cookFood();		
	// }
