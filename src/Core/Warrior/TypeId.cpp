//
// Created by Killian on 10/01/18.
//

#include "TypeId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


std::ostream& operator <<(std::ostream& os, TypeId typeId)
{
    switch (typeId)
    {
        case TypeId::NIL:
            os << "NIL";
            break;
        
        case TypeId::BUG:
            os << "BUG";
            break;
        
        case TypeId::DARK:
            os << "DARK";
            break;
        
        case TypeId::DRAGON:
            os << "DRAGON";
            break;
        
        case TypeId::ELECTRIC:
            os << "ELECTRIC";
            break;
        
        case TypeId::FAIRY:
            os << "FAIRY";
            break;
        
        case TypeId::FIGHT:
            os << "FIGHT";
            break;
        
        case TypeId::FIRE:
            os << "FIRE";
            break;
        
        case TypeId::FLYING:
            os << "FLYING";
            break;
        
        case TypeId::GHOST:
            os << "GHOST";
            break;
        
        case TypeId::GRASS:
            os << "GRASS";
            break;
        
        case TypeId::GROUND:
            os << "GROUND";
            break;
        
        case TypeId::ICE:
            os << "ICE";
            break;
        
        case TypeId::NORMAL:
            os << "NORMAL";
            break;
        
        case TypeId::POISON:
            os << "POISON";
            break;
        
        case TypeId::PSYCHIC:
            os << "PSYCHIC";
            break;
        
        case TypeId::ROCK:
            os << "ROCK";
            break;
        
        case TypeId::STEEL:
            os << "STEEL";
            break;
        
        case TypeId::WATER:
            os << "WATER";
            break;
    }
    
    return os;
}


}
}
}
