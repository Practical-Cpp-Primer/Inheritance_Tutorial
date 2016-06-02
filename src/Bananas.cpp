#include "Bananas.h"
#include <iostream>

using std::cout;
using std::endl;

/*!
 * Default constructor. Initializes food base class, and then creates Bananas object.
 */
Bananas::Bananas() : Food() {}

void Bananas::cookFood() {
	cout << "Unpeeling banana" << endl;
	cout << "Banana unpeeled!" << endl;
	cooked = true;
	cout << "Food is ready to eat!" << endl;
}