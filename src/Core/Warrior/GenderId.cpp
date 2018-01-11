//
// Created by Killian on 11/01/18.
//

#include "GenderId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


std::ostream& operator <<(std::ostream& os, GenderId genderId)
{
    switch (genderId)
    {
        case GenderId::NIL:
            os << "NIL";
            break;
        
        case GenderId::FEMALE:
            os << "FEMALE";
            break;
    
        case GenderId::MALE:
            os << "MALE";
            break;
    
    }
    
    return os;
}


}
}
}
