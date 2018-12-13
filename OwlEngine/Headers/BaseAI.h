#pragma once
namespace OwlEngine
{

class BasePawn;
class BaseAI
{
public:
    BaseAI();
    virtual ~BaseAI();

	void UpdateCurrentTarget()
	{

	}


	BasePawn *mOwner;
};

} // namespace OwlEngine