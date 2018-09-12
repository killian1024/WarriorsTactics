//
// Created by Killian on 11/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_NATUREID_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_NATUREID_HPP

#include <ostream>


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


enum class NatureId
{
    NIL,
    HARDY,
    LONELY,
    BRAVE,
    ADAMANT,
    NAUGHTY,
    BOLD,
    DOCILE,
    RELAXED,
    IMPISH,
    LAX,
    TIMID,
    HASTY,
    SERIOUS,
    JOLLY,
    NAIVE,
    MODEST,
    MILD,
    QUIET,
    BASHFUL,
    RASH,
    CALM,
    GENTLE,
    SASSY,
    CAREFUL,
    QUIRKY
};


extern const char* const natureIdStr[];


std::ostream& operator <<(std::ostream& os, NatureId typeId);


}
}
}


#endif
