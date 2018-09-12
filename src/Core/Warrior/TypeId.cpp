//
// Created by Killian on 10/01/18.
//

#include "TypeId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


const char* const typeIdStr[] =
{
    "NIL",
    "BUG",
    "DARK",
    "DRAGON",
    "ELECTRIC",
    "FAIRY",
    "FIGHT",
    "FIRE",
    "FLYING",
    "GHOST",
    "GRASS",
    "GROUND",
    "ICE",
    "NORMAL",
    "POISON",
    "PSYCHIC",
    "ROCK",
    "STEEL",
    "WATER"
};


std::ostream& operator <<(std::ostream& os, TypeId typeId)
{
    return os << typeIdStr[(std::size_t)typeId];
}


}
}
}
