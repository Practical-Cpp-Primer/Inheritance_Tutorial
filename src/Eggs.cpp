#include "Eggs.h"
#include <iostream>

using std::cout;
using std::endl;

Eggs::Eggs() : Food() {}

void Eggs::cookFood() {
	cout << "Taking out frying pan" << endl;
	cout << "Cracking open eggs" << endl;
	cout << "Cooking eggs..." << endl;
	cout << "Adding salt and pepper" << endl;
	cout << "Cooking process complete!" << endl;
	cooked = true;
	cout << "Food is ready to eat!" << endl;
}