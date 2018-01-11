//
// Created by Killian on 11/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_MOVECATEGORYID_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_MOVECATEGORYID_HPP

#include <ostream>


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


enum class MoveCategoryId
{
    NIL,
    PHYSICAL,
    SPECIAL,
    STATUS
};


std::ostream& operator <<(std::ostream& os, MoveCategoryId moveCategoryId);


}
}
}


#endif
