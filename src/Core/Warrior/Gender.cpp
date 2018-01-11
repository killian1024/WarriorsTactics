//
// Created by Killian on 10/01/18.
//

#include <utility>

#include "Gender.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


Gender::Gender(GenderId genderId) noexcept
        : genderId_(genderId)
{
}


std::ostream& operator <<(std::ostream& os, const Gender& gender)
{
    return os << gender.genderId_;
}


}
}
}
