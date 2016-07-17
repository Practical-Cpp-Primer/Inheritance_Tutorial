#include "Bananas.h"
#include "Bread.h"
#include "Eggs.h"
#include "Pancakes.h"

#include <iostream>
#include <memory>
#include <vector>

using std::cout;
using std::endl;
using std::shared_ptr;
using std::vector;

void prepare(vector<shared_ptr<Food>> itemsToCook);
void checkPreparedness(vector<shared_ptr<Food>> itemsToCook);

int main(int argc, char const *argv[]){
	// Initialize foods
	
	// Initialization with make_shared
	Bananas banana;
	shared_ptr<Bananas> bananaPtr = std::make_shared<Bananas>(banana);

	// Initialization with constructor
	shared_ptr<Bread> breadPtr(new Bread);

	// When initialization must be separate from declaration
	shared_ptr<Eggs> eggPtr(nullptr);
	Eggs eggs;
	eggPtr = std::make_shared<Eggs>(eggs);
	
	// Initialization with make_shared too
	Pancakes pancakes;
	auto pancakePtr = std::make_shared<Pancakes>(pancakes);

	
	// Add foods to vector of foods
	vector<shared_ptr<Food>> foodVec;
	foodVec.push_back(bananaPtr);
	foodVec.push_back(breadPtr);
	foodVec.push_back(eggPtr);
	foodVec.push_back(pancakePtr);

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
void prepare(vector<shared_ptr<Food>> itemsToCook) {
	for (auto i = itemsToCook.begin(); i != itemsToCook.end(); ++i) {
		(*i) -> cookFood();
	}
}

/*!
 * Checks to see if food in list of food is prepared.
 * @param itemsToCook List of items to check.
 */
void checkPreparedness(vector<shared_ptr<Food>> itemsToCook) {
	for (vector<shared_ptr<Food>>::iterator i = itemsToCook.begin(); i != itemsToCook.end(); ++i)	 {
		cout << "Food is cooked: " << (*i) -> isCooked() << endl;
	}
};