//
// Created by Killian on 11/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_GENDERID_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_GENDERID_HPP

#include <ostream>


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


enum class GenderId
{
    NIL,
    FEMALE,
    MALE,
};


std::ostream& operator <<(std::ostream& os, GenderId genderId);


}
}
}


#endif
