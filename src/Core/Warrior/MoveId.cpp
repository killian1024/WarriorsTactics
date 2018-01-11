//
// Created by Killian on 11/01/18.
//

#include "MoveId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


std::ostream& operator <<(std::ostream& os, MoveId moveId)
{
    switch (moveId)
    {
        case MoveId::NIL:
            os << "NIL";
            break;
        
        case MoveId::BOOMBURST:
            os << "BOOMBURST";
            break;
            
        case MoveId::HYDRO_PUMP:
            os << "HYDRO_PUMP";
            break;
    
        case MoveId::ICE_BEAM:
            os << "ICE_BEAM";
            break;
    
        case MoveId::SING:
            os << "SING";
            break;
    
    }
    
    return os;
}


}
}
}
