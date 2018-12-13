#pragma once
#include "OwlEngine.h"

class Battlefield : public OwlEngine::BaseBattlefield
{
public:
    Battlefield();
    ~Battlefield();

	OwlEngine::Vec2D mCornerLB;
	OwlEngine::Vec2D mCornerRT;
};
