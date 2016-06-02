#include "Bread.h"
#include <iostream>

using std::cout;
using std::endl;

/*!
 * Default constructor. Initializes food base class, and then creates Bread object.
 */
Bread::Bread() : Food(){}

void Bread::cookFood() {
	cout << "Putting bread in toaster" << endl;
	cout << "Toasted!" << endl;
	cooked = true;
	cout << "Food is ready to eat!" << endl;
}