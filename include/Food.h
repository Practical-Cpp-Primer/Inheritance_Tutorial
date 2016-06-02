#ifndef FOOD_H_
#define FOOD_H_

class Food
{
protected:
	bool cooked;

public:
	Food();
	~Food();
	bool isCooked();
	/*!
	 * Food is cooked, and cooked is set to true. This is an irreversible action.
	 */
	virtual void cookFood() = 0;
};

#endif  // FOOD_H_