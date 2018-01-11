//
// Created by Killian on 10/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_STATSVALUES_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_STATSVALUES_HPP

#include <ostream>

#include <kboost/kboost.hpp>

#include "StatId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


class StatsValues
{
public:
    StatsValues() noexcept;
    
    StatsValues(
            std::uint32_t hp,
            std::uint32_t attack,
            std::uint32_t defence,
            std::uint32_t spAttack,
            std::uint32_t spDefence,
            std::uint32_t speed
    ) noexcept;
    
    void setMax(std::uint32_t maxValue) noexcept;
    
    uint32_t getStat(StatId statId) const noexcept;
    
    uint32_t getHp() const noexcept;
    
    void setHp(uint32_t hp) noexcept;
    
    uint32_t getAttack() const noexcept;
    
    void setAttack(uint32_t attack) noexcept;
    
    uint32_t getDefence() const noexcept;
    
    void setDefence(uint32_t defence) noexcept;
    
    uint32_t getSpAttack() const noexcept;
    
    void setSpAttack(uint32_t spAttack) noexcept;
    
    uint32_t getSpDefence() const noexcept;
    
    void setSpDefence(uint32_t spDefence) noexcept;
    
    uint32_t getSpeed() const noexcept;
    
    void setSpeed(uint32_t speed) noexcept;
    
    void print(std::ostream& os, kios::indentation& indentation) const;

private:
    std::uint32_t hp_;
    
    std::uint32_t attack_;
    
    std::uint32_t defence_;
    
    std::uint32_t spAttack_;
    
    std::uint32_t spDefence_;
    
    std::uint32_t speed_;
};


}
}
}


#endif
