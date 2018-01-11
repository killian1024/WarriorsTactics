//
// Created by Killian on 10/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_STATS_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_STATS_HPP

#include <kboost/kboost.hpp>

#include "Nature.hpp"
#include "StatsValues.hpp"
#include "WarriorId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


class Stats
{
public:
    Stats(
            WarriorId warriorId,
            std::uint32_t level,
            const Nature& nature,
            const StatsValues& evs,
            const StatsValues& ivs
    ) noexcept;
    
    const StatsValues& getBaseStatsValues() const noexcept;
    
    void resetCurrentStats() noexcept;
    
    void print(std::ostream& os, kios::indentation& indent) const;

private:
    
    std::uint32_t getOriginalStat(StatId statId) const noexcept;

private:
    WarriorId warriorId_;
    
    std::uint32_t level_;
    
    Nature nature_;
    
    StatsValues evs_;
    
    StatsValues ivs_;
    
    StatsValues current_;
};


}
}
}


#endif
