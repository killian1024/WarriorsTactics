//
// Created by Killian on 10/01/18.
//

#include "WarriorId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


std::ostream& operator <<(std::ostream& os, WarriorId warriorId)
{
    switch (warriorId)
    {
        case WarriorId::NIL:
            os << "NIL";
            break;
            
        case WarriorId::AZURA:
            os << "AZURA";
            break;
        
        case WarriorId::CAMILLA:
            os << "CAMILLA";
            break;
    
        case WarriorId::CELICA:
            os << "CELICA";
            break;
    
        case WarriorId::CORDELIA:
            os << "CORDELIA";
            break;
    
        case WarriorId::CORRIN:
            os << "CORRIN";
            break;
    
        case WarriorId::ELISE:
            os << "ELISE";
            break;
    
        case WarriorId::HINOKA:
            os << "HINOKA";
            break;
    
        case WarriorId::LIANNA:
            os << "LIANNA";
            break;
    
        case WarriorId::LUCINA:
            os << "LUCINA";
            break;
    
        case WarriorId::LYN:
            os << "LYN";
            break;
    
        case WarriorId::SAKURA:
            os << "SAKURA";
            break;
    
        case WarriorId::TIKI:
            os << "TIKI";
            break;
    }
    
    return os;
}


}
}
}
