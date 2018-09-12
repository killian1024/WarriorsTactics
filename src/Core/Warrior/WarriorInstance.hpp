//
// Created by Killian on 10/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_WARRIORINSTANCE_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_WARRIORINSTANCE_HPP

#include <ostream>

#include "Details.hpp"
#include "Moves.hpp"
#include "Stats.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


class WarriorInstance
{
public:
    WarriorInstance(
            WarriorId warriorId,
            std::string nickname,
            std::uint32_t happiness,
            bool shiny,
            std::uint32_t level,
            NatureId natureId,
            const StatsValues& evs,
            const StatsValues& ivs
    ) noexcept;
    
    void print(std::ostream& os) const;

private:
    WarriorId warriorId_;
    
    Details details_;
    
    Moves moves_;
    
    Stats stats_;
    
    bool legal_;
};


}
}
}


#endif
