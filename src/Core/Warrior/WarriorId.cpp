//
// Created by Killian on 10/01/18.
//

#include "WarriorId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


const char* const warriorIdStr[] =
{
    "NIL",
    "AZURA",
    "CAMILLA",
    "CELICA",
    "CORDELIA",
    "CORRIN",
    "ELISE",
    "HINOKA",
    "LIANNA",
    "LUCINA",
    "LYN",
    "SAKURA",
    "TIKI"
};


std::ostream& operator <<(std::ostream& os, WarriorId warriorId)
{
    return os << warriorIdStr[(std::size_t)warriorId];
}


}
}
}
