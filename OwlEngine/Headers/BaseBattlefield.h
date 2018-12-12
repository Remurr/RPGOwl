#pragma once
namespace OwlEngine
{

class BaseBattlefield
{
public:
    BaseBattlefield* GetInstance();

protected:
    BaseBattlefield();
    virtual ~BaseBattlefield();
};

} // namespace OwlEngine