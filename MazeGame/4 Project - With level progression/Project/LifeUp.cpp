#include "LifeUp.h"
#include <iostream>

LifeUp::LifeUp(int x, int y, int life)
	: PlaceableActor(x, y)
	, m_life(life)
{

}

void LifeUp::Draw()
{
	std::cout << "*";
}