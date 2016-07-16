#include "Bananas.h"
#include "Bread.h"
#include "Eggs.h"
#include "Pancakes.h"

#include <iostream>
#include <memory>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::shared_ptr;
using std::unique_ptr;

vector<unique_ptr<Food>> prepare(vector<unique_ptr<Food>> itemsToCook);
vector<unique_ptr<Food>> checkPreparedness(vector<unique_ptr<Food>> itemsToCook);

int main(int argc, char const *argv[]){
	// Initialize foods
	unique_ptr<Bananas> banana(new Bananas);
	unique_ptr<Bread> bread(new Bread);
	unique_ptr<Eggs> eggs(new Eggs);
	unique_ptr<Pancakes> pancakes(new Pancakes);
	
	// Add foods to vector of foods
	vector<unique_ptr<Food>> foodVec;
	foodVec.push_back(std::move(banana));
	foodVec.push_back(std::move(bread));
	foodVec.push_back(std::move(eggs));
	// foodVec.push_back(&pancakes);

	// Check preparedness of foods, prepare foods, then check again
	foodVec = checkPreparedness(std::move(foodVec));
	foodVec = prepare(std::move(foodVec));
	foodVec = checkPreparedness(std::move(foodVec));
	return 0;
}

/*!
 * Cooks list of food using unique pointers.
 * @param itemsToCook List of items to cook.
 */
vector<unique_ptr<Food>> prepare(vector<unique_ptr<Food>> itemsToCook) {
	for (auto& i : itemsToCook) {
		i -> cookFood();
	}

	return itemsToCook;
}

/*!
 * Checks to see if food in list of food is prepared using unique pointers.
 * @param itemsToCook List of items to check.
 */
vector<unique_ptr<Food>> checkPreparedness(vector<unique_ptr<Food>> itemsToCook) {
	for (auto &i : itemsToCook) {
		cout << "Food is cooked: " << i -> isCooked() << endl;		
	}

	return itemsToCook;
}