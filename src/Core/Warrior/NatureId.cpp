//
// Created by Killian on 11/01/18.
//

#include "NatureId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


std::ostream& operator <<(std::ostream& os, NatureId typeId)
{
    switch (typeId)
    {
        case NatureId::NIL:
            os << "NIL";
            break;
            
        case NatureId::HARDY:
            os << "HARDY";
            break;
        
        case NatureId::LONELY:
            os << "LONELY";
            break;
        
        case NatureId::BRAVE:
            os << "BRAVE";
            break;
        
        case NatureId::ADAMANT:
            os << "ADAMANT";
            break;
        
        case NatureId::NAUGHTY:
            os << "NAUGHTY";
            break;
        
        case NatureId::BOLD:
            os << "BOLD";
            break;
        
        case NatureId::DOCILE:
            os << "DOCILE";
            break;
        
        case NatureId::RELAXED:
            os << "RELAXED";
            break;
        
        case NatureId::IMPISH:
            os << "IMPISH";
            break;
        
        case NatureId::LAX:
            os << "LAX";
            break;
        
        case NatureId::TIMID:
            os << "TIMID";
            break;
        
        case NatureId::HASTY:
            os << "HASTY";
            break;
        
        case NatureId::SERIOUS:
            os << "SERIOUS";
            break;
        
        case NatureId::JOLLY:
            os << "JOLLY";
            break;
        
        case NatureId::NAIVE:
            os << "NAIVE";
            break;
        
        case NatureId::MODEST:
            os << "MODEST";
            break;
        
        case NatureId::MILD:
            os << "MILD";
            break;
        
        case NatureId::QUIET:
            os << "QUIET";
            break;
        
        case NatureId::BASHFUL:
            os << "BASHFUL";
            break;
        
        case NatureId::RASH:
            os << "RASH";
            break;
        
        case NatureId::CALM:
            os << "CALM";
            break;
        
        case NatureId::GENTLE:
            os << "GENTLE";
            break;
        
        case NatureId::SASSY:
            os << "SASSY";
            break;
        
        case NatureId::CAREFUL:
            os << "CAREFUL";
            break;
        
        case NatureId::QUIRKY:
            os << "QUIRKY";
            break;
    }
    
    return os;
}


}
}
}
