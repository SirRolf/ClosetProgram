#pragma once
#include <list>
#include "Drawer.hpp"

class Closet
{
public:
	Closet(int aCapacity);
	~Closet();
	void AddDrawer(Drawer* aDrawer);

private:
	int capacity = 5;

	std::list<Drawer*> *drawers;
};

