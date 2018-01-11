//
// Created by Killian on 11/01/18.
//

#include "Nature.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


Nature::Nature(NatureId natureId) noexcept
        : natureId_(natureId)
{
}


double Nature::getMultiplier(StatId statId) const noexcept
{
    switch (natureId_)
    {
        case NatureId::NIL:
            return 1.0;
        
        case NatureId::HARDY:
            return 1.0;
        
        case NatureId::LONELY:
            return statId == StatId::ATTACK ? 1.1 :
                   statId == StatId::DEFENCE ? 0.9 : 1.0;
        
        case NatureId::BRAVE:
            return statId == StatId::ATTACK ? 1.1 :
                   statId == StatId::SPEED ? 0.9 : 1.0;
        
        case NatureId::ADAMANT:
            return statId == StatId::ATTACK ? 1.1 :
                   statId == StatId::SP_ATTACK ? 0.9 : 1.0;
        
        case NatureId::NAUGHTY:
            return statId == StatId::ATTACK ? 1.1 :
                   statId == StatId::SP_DEFENCE ? 0.9 : 1.0;
        
        case NatureId::BOLD:
            return statId == StatId::DEFENCE ? 1.1 :
                   statId == StatId::ATTACK ? 0.9 : 1.0;
        
        case NatureId::DOCILE:
            return 1.0;
        
        case NatureId::RELAXED:
            return statId == StatId::DEFENCE ? 1.1 :
                   statId == StatId::SPEED ? 0.9 : 1.0;
        
        case NatureId::IMPISH:
            return statId == StatId::DEFENCE ? 1.1 :
                   statId == StatId::SP_ATTACK ? 0.9 : 1.0;
        
        case NatureId::LAX:
            return statId == StatId::DEFENCE ? 1.1 :
                   statId == StatId::SP_DEFENCE ? 0.9 : 1.0;
        
        case NatureId::TIMID:
            return statId == StatId::SPEED ? 1.1 :
                   statId == StatId::ATTACK ? 0.9 : 1.0;
        
        case NatureId::HASTY:
            return statId == StatId::SPEED ? 1.1 :
                   statId == StatId::DEFENCE ? 0.9 : 1.0;
        
        case NatureId::SERIOUS:
            return 1.0;
        
        case NatureId::JOLLY:
            return statId == StatId::SPEED ? 1.1 :
                   statId == StatId::SP_ATTACK ? 0.9 : 1.0;
        
        case NatureId::NAIVE:
            return statId == StatId::SPEED ? 1.1 :
                   statId == StatId::SP_DEFENCE ? 0.9 : 1.0;
        
        case NatureId::MODEST:
            return statId == StatId::SP_ATTACK ? 1.1 :
                   statId == StatId::ATTACK ? 0.9 : 1.0;
        
        case NatureId::MILD:
            return statId == StatId::SP_ATTACK ? 1.1 :
                   statId == StatId::DEFENCE ? 0.9 : 1.0;
        
        case NatureId::QUIET:
            return statId == StatId::SP_ATTACK ? 1.1 :
                   statId == StatId::SPEED ? 0.9 : 1.0;
        
        case NatureId::BASHFUL:
            return 1.0;
        
        case NatureId::RASH:
            return statId == StatId::SP_ATTACK ? 1.1 :
                   statId == StatId::SP_DEFENCE ? 0.9 : 1.0;
        
        case NatureId::CALM:
            return statId == StatId::SP_DEFENCE ? 1.1 :
                   statId == StatId::ATTACK ? 0.9 : 1.0;
        
        case NatureId::GENTLE:
            return statId == StatId::SP_DEFENCE ? 1.1 :
                   statId == StatId::DEFENCE ? 0.9 : 1.0;
        
        case NatureId::SASSY:
            return statId == StatId::SP_DEFENCE ? 1.1 :
                   statId == StatId::SPEED ? 0.9 : 1.0;
        
        case NatureId::CAREFUL:
            return statId == StatId::SP_DEFENCE ? 1.1 :
                   statId == StatId::SP_ATTACK ? 0.9 : 1.0;
        
        case NatureId::QUIRKY:
            return 1.0;
    }
}


std::ostream& operator <<(std::ostream& os, const Nature& nature)
{
    return os << nature.natureId_;
}


}
}
}
