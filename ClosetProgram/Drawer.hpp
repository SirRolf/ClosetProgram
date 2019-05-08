#pragma once
#include <list>
#include "Pants.hpp"

class Drawer
{
public:
	Drawer();
	~Drawer();

private:
	std::list<Pants*> *pants;
};

