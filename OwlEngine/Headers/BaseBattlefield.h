#pragma once
#include <vector>

namespace OwlEngine
{

enum TeamSide
{
	eTS_TeamA,
	eTS_TeamB,
	eTS_MAX
};

class BasePawn;
class BaseBattlefield
{
public:
    BaseBattlefield();
    virtual ~BaseBattlefield();

	void MakeFight()
	{

	}

	std::vector<BasePawn*> mTeams[eTS_MAX];
};

} // namespace OwlEngine