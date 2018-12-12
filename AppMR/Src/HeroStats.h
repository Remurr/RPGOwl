#pragma once
#include "OwlEngine.h"

struct HeroStats : public OwlEngine::BaseHeroStats
{
    float physAttack;
    float physResist;
    float physPenRaw;
    float physPenPercent;
     
    float magAttack;
    float magResist;
    float magPenRaw;
    float magPenPercent;

    float hitLvl;
    float dodgeLvl;

    HeroStats()
        : OwlEngine::BaseHeroStats()
    {}
};

