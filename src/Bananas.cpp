#include "Bananas.h"
#include <iostream>

using std::cout;
using std::endl;

Bananas::Bananas() : Food(){}

void Bananas::cookFood() {
	cout << "Unpeeling banana" << endl;
	cout << "Banana unpeeled!" << endl;
	cooked = true;
	cout << "Food is ready to eat!" << endl;
}