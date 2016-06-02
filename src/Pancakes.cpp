#include "Pancakes.h"
#include <iostream>

using std::cout;
using std::endl;

/*!
 * Default constructor. Initializes food base class, and then creates Pancakes object.
 */
Pancakes::Pancakes() : Food() {}

void Pancakes::cookFood() {
	cout << "Getting out pancake mix" << endl;
	cout << "Getting water" << endl;
	cout << "Stirring mix" << endl;	
	cout << "Getting out frying pan" << endl;
	cout << "Putting mix in frying pan" << endl;
	cout << "Flipping pancakes to other side" << endl;
	cooked = true;
	cout << "Food is ready to eat!" << endl;
}