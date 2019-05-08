#include "pch.h"
#include "Closet.hpp"


Closet::Closet(int aCapacity)
	:capacity(aCapacity)
{
	drawers = new std::list<Drawer*>();

}


Closet::~Closet()
{

}

void Closet::AddDrawer(Drawer* aDrawer)
{
	//???
	for (int i = 0; i < capacity; i++)
	{
		drawers->push_back(aDrawer);
	}
}
