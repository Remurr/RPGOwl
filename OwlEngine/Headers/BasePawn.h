#pragma once
#include "BaseAI.h"
#include "BaseHeroStats.h"
#include "BaseBattlefield.h"
#include "OwlMath.h"

namespace OwlEngine
{

class BasePawn
{
public:
    BasePawn();
    virtual ~BasePawn();

	void Tick(float dt)
	{
		mAI->UpdateCurrentTarget();
	}


	BasePawn *mCurrentTarget;
	BaseAI *mAI;
	BaseHeroStats *mStats;
	BaseBattlefield *mBattlefield;
	TeamSide mSide;

	float mAutoAttackRange;
	Vec2D mVelocity;
};

} // namespace OwlEngine