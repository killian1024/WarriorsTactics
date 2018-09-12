//
// Created by Killian on 10/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_WARRIORID_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_WARRIORID_HPP

#include <ostream>


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


enum class WarriorId
{
    NIL,
    AZURA,
    CAMILLA,
    CELICA,
    CORDELIA,
    CORRIN,
    ELISE,
    HINOKA,
    LIANNA,
    LUCINA,
    LYN,
    SAKURA,
    TIKI,
};


extern const char* const warriorIdStr[];


std::ostream& operator <<(std::ostream& os, WarriorId warriorId);


}
}
}


#endif
