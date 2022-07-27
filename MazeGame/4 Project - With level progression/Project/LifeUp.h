#pragma once
#include "PlaceableActor.h"
class LifeUp : public PlaceableActor
{
public:
	LifeUp(int x, int y, int life);

	int GetLife() const { return m_life; }

	virtual ActorType GetType() override { return ActorType::LifeUp; }
	virtual void Draw() override;
private:
	int m_life;
};