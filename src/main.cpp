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

int main(int argc, char const *argv[])
{
	Bananas banana;
	Bread bread;
	Eggs eggs;
	Pancakes pancakes;
	
	vector<Food*> foodVec;
	foodVec.push_back(&banana);
	foodVec.push_back(&bread);
	foodVec.push_back(&eggs);
	foodVec.push_back(&pancakes);

	checkPreparedness(foodVec);
	prepare(foodVec);
	checkPreparedness(foodVec);
	return 0;
}

void prepare(vector<Food*> itemsToCook) {
	for (vector<Food*>::iterator i = itemsToCook.begin(); i != itemsToCook.end(); ++i) {
		(*i) -> cookFood();
	}
}

void checkPreparedness(vector<Food*> itemsToCook) {
	for (vector<Food*>::iterator i = itemsToCook.begin(); i != itemsToCook.end(); ++i)	 {
		cout << "Food is cooked: " << (*i) -> isCooked() << endl;
	}
}