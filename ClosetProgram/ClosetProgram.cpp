// ClosetProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Closet.hpp"

int main()
{
    std::cout << "Hello World!\n"; 
	Closet closet{ 10 };

	Closet* myCloset = new Closet(10);
	Drawer* myDrawer = new Drawer();
	Drawer mySecondDrawer{};
	myCloset->AddDrawer(mySecondDrawer);
}
