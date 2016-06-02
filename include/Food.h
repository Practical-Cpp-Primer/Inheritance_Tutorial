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
	virtual void cookFood() = 0;
};

#endif  // FOOD_H_