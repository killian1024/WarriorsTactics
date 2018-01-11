//
// Created by Killian on 10/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_GENDER_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_GENDER_HPP

#include <ostream>
#include "GenderId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


class Gender
{
public:
    Gender(GenderId genderId) noexcept;
    
    friend std::ostream& operator <<(std::ostream& os, const Gender& gender);

private:
    GenderId genderId_;
};


}
}
}


#endif
