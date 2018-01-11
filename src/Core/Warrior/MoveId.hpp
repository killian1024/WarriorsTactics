//
// Created by Killian on 11/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_MOVEID_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_MOVEID_HPP

#include <ostream>

#undef SING


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


enum class MoveId
{
    NIL,
    BOOMBURST,
    HYDRO_PUMP,
    ICE_BEAM,
    SING
};


std::ostream& operator <<(std::ostream& os, MoveId moveId);


}
}
}


#endif
