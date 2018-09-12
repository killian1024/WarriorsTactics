//
// Created by Killian on 11/01/18.
//

#include "NatureId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


const char* const natureIdStr[]
{
    "NIL",
    "HARDY",
    "LONELY",
    "BRAVE",
    "ADAMANT",
    "NAUGHTY",
    "BOLD",
    "DOCILE",
    "RELAXED",
    "IMPISH",
    "LAX",
    "TIMID",
    "HASTY",
    "SERIOUS",
    "JOLLY",
    "NAIVE",
    "MODEST",
    "MILD",
    "QUIET",
    "BASHFUL",
    "RASH",
    "CALM",
    "GENTLE",
    "SASSY",
    "CAREFUL",
    "QUIRKY"
};


std::ostream& operator <<(std::ostream& os, NatureId typeId)
{
    return os << natureIdStr[(std::size_t)typeId];
}


}
}
}
