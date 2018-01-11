//
// Created by Killian on 10/01/18.
//

#include <kboost/kboost.hpp>

#include "StatsValues.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


StatsValues::StatsValues() noexcept
        : hp_(0)
        , attack_(0)
        , defence_(0)
        , spAttack_(0)
        , spDefence_(0)
        , speed_(0)
{
}


StatsValues::StatsValues(
        std::uint32_t hp,
        std::uint32_t attack,
        std::uint32_t defence,
        std::uint32_t spAttack,
        std::uint32_t spDefence,
        std::uint32_t speed
) noexcept
        : hp_(hp)
        , attack_(attack)
        , defence_(defence)
        , spAttack_(spAttack)
        , spDefence_(spDefence)
        , speed_(speed)
{
}


void StatsValues::setMax(std::uint32_t maxValue) noexcept
{
    if (hp_ > maxValue)
    {
        hp_ = maxValue;
    }
    if (attack_ > maxValue)
    {
        attack_ = maxValue;
    }
    if (defence_ > maxValue)
    {
        defence_ = maxValue;
    }
    if (spAttack_ > maxValue)
    {
        spAttack_ = maxValue;
    }
    if (spDefence_ > maxValue)
    {
        spDefence_ = maxValue;
    }
    if (speed_ > maxValue)
    {
        speed_ = maxValue;
    }
}


uint32_t StatsValues::getStat(StatId statId) const noexcept
{
    switch (statId)
    {
        case StatId::NIL:
            return 0;
        
        case StatId::HP:
            return hp_;
        
        case StatId::ATTACK:
            return attack_;
        
        case StatId::DEFENCE:
            return defence_;
        
        case StatId::SP_ATTACK:
            return spAttack_;
        
        case StatId::SP_DEFENCE:
            return spDefence_;
        
        case StatId::SPEED:
            return speed_;
    }
}


uint32_t StatsValues::getHp() const noexcept
{
    return hp_;
}


void StatsValues::setHp(uint32_t hp) noexcept
{
    hp_ = hp;
}


uint32_t StatsValues::getAttack() const noexcept
{
    return attack_;
}


void StatsValues::setAttack(uint32_t attack) noexcept
{
    attack_ = attack;
}


uint32_t StatsValues::getDefence() const noexcept
{
    return defence_;
}


void StatsValues::setDefence(uint32_t defence) noexcept
{
    defence_ = defence;
}


uint32_t StatsValues::getSpAttack() const noexcept
{
    return spAttack_;
}


void StatsValues::setSpAttack(uint32_t spAttack) noexcept
{
    spAttack_ = spAttack;
}


uint32_t StatsValues::getSpDefence() const noexcept
{
    return spDefence_;
}


void StatsValues::setSpDefence(uint32_t spDefence) noexcept
{
    spDefence_ = spDefence;
}


uint32_t StatsValues::getSpeed() const noexcept
{
    return speed_;
}


void StatsValues::setSpeed(uint32_t speed) noexcept
{
    speed_ = speed;
}


void StatsValues::print(std::ostream& os, kios::indentation& indentation) const
{
    indentation++;
    
    os << indentation << "hp_ : " << hp_ << kios::newl
       << indentation << "attack_ : " << attack_ << kios::newl
       << indentation << "defence_ : " << defence_ << kios::newl
       << indentation << "spAttack_ : " << spAttack_ << kios::newl
       << indentation << "spDefence_ : " << spDefence_ << kios::newl
       << indentation << "speed_ : " << speed_ << kios::newl;
    
    indentation--;
}


}
}
}
