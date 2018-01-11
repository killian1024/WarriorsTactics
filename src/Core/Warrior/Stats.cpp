//
// Created by Killian on 10/01/18.
//

#include "Stats.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


Stats::Stats(
        WarriorId warriorId,
        std::uint32_t level,
        const Nature& nature,
        const StatsValues& evs,
        const StatsValues& ivs
) noexcept
        : warriorId_(warriorId)
        , level_(level)
        , nature_(nature)
        , evs_(evs)
        , ivs_(ivs)
        , current_()
{
    if (level_ > 100)
    {
        level_ = 100;
    }
    
    evs_.setMax(255);
    ivs_.setMax(31);
    
    resetCurrentStats();
}


const StatsValues& Stats::getBaseStatsValues() const noexcept
{
    static StatsValues baseStatsValues;
    
    switch (warriorId_)
    {
        case WarriorId::AZURA:
            baseStatsValues = StatsValues(70, 75, 115, 95, 130, 85);
            break;
        
        default:
            baseStatsValues = StatsValues(0, 0, 0, 0, 0, 0);
            break;
    }
    
    return baseStatsValues;
}


void Stats::resetCurrentStats() noexcept
{
    current_.setHp(getOriginalStat(StatId::HP));
    current_.setAttack(getOriginalStat(StatId::ATTACK));
    current_.setDefence(getOriginalStat(StatId::DEFENCE));
    current_.setSpAttack(getOriginalStat(StatId::SP_ATTACK));
    current_.setSpDefence(getOriginalStat(StatId::SP_DEFENCE));
    current_.setSpeed(getOriginalStat(StatId::SPEED));
}


void Stats::print(std::ostream& os, kios::indentation& indent) const
{
    indent++;
    
    os << indent << "level_ : " << level_ << kios::newl
       << indent << "nature_ : " << nature_ << kios::newl;
    
    os << indent << "base_ : " << kios::newl;
    getBaseStatsValues().print(os, indent);
    
    os << indent << "evs_ : " << kios::newl;
    evs_.print(os, indent);
    
    os << indent << "ivs_ : " << kios::newl;
    ivs_.print(os, indent);
    
    os << indent << "current_ : " << kios::newl;
    current_.print(os, indent);
    
    indent--;
}


std::uint32_t Stats::getOriginalStat(StatId statId) const noexcept
{
    auto& baseStats = getBaseStatsValues();
    
    if (statId == StatId::HP)
    {
        return static_cast<std::uint32_t>(
                ((2 * baseStats.getStat(statId) + ivs_.getStat(statId) +
                  evs_.getStat(statId) / 4) * level_) / 100 + level_ + 10);
    }
    else
    {
        return static_cast<std::uint32_t>(
                (((2 * baseStats.getStat(statId) + ivs_.getStat(statId) +
                   evs_.getStat(statId) / 4) * level_) / 100 + 5) *
                nature_.getMultiplier(statId));
    }
}


}
}
}
