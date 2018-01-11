//
// Created by dragonfly on 10/01/18.
//

#include "Warrior.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


Warrior::Warrior(
        WarriorId warriorId,
        std::string nickname,
        std::uint32_t happiness,
        bool shiny,
        std::uint32_t level,
        NatureId natureId,
        const StatsValues& evs,
        const StatsValues& ivs
) noexcept
        : warriorId_(warriorId)
        , details_(warriorId, std::move(nickname), happiness, shiny)
        , moves_()
        , stats_(warriorId, level, natureId, evs, ivs)
        , legal_(true)
{
}


void Warrior::print(std::ostream& os) const
{
    std::ios old_os_state(nullptr);
    kios::indentation indent;
    
    old_os_state.copyfmt(os);
    os << std::boolalpha;
    
    os << "warriorId_ : " << warriorId_ << kios::newl;
    
    os << "details_ : " << kios::newl;
    details_.print(os, indent);
    
    os << "moves_ : " << kios::newl;
    
    os << "stats_ : " << kios::newl;
    stats_.print(os, indent);
    
    os << "legal_ : " << legal_ << kios::newl;
    
    os.copyfmt(old_os_state);
}


}
}
}
