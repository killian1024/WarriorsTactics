//
// Created by Killian on 11/01/18.
//

#include "MoveCategoryId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


std::ostream& operator <<(std::ostream& os, MoveCategoryId moveCategoryId)
{
    switch (moveCategoryId)
    {
        case MoveCategoryId::NIL:
            os << "NIL";
            break;
        
        case MoveCategoryId::PHYSICAL:
            os << "PHYSICAL";
            break;
    
        case MoveCategoryId::SPECIAL:
            os << "SPECIAL";
            break;
    
        case MoveCategoryId::STATUS:
            os << "STATUS";
            break;
    }
    
    return os;
}


}
}
}

