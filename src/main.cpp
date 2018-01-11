#include <iostream>

#include "Core/Warrior/Warrior.hpp"

namespace wcw = WarriorsTactics::Core::Warrior;


int main()
{
    wcw::Warrior azura(wcw::WarriorId::AZURA,
                       "Azura",
                       255,
                       false,
                       100,
                       wcw::NatureId::TIMID,
                       {248, 0, 8, 0, 0, 252},
                       {31, 31, 31, 31, 31, 31});
    
    azura.print(std::cout);
    
    return 0;
}
