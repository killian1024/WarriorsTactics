//
// Created by Killian on 10/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_TYPEID_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_TYPEID_HPP

#include <ostream>


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


enum class TypeId
{
    NIL,
    BUG,
    DARK,
    DRAGON,
    ELECTRIC,
    FAIRY,
    FIGHT,
    FIRE,
    FLYING,
    GHOST,
    GRASS,
    GROUND,
    ICE,
    NORMAL,
    POISON,
    PSYCHIC,
    ROCK,
    STEEL,
    WATER
};


std::ostream& operator <<(std::ostream& os, TypeId typeId);


}
}
}


#endif
