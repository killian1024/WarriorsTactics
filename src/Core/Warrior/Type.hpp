//
// Created by Killian on 11/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_TYPE_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_TYPE_HPP

#include <ostream>

#include "TypeId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


class Type
{
public:
    Type(TypeId typeId) noexcept;
    
    friend std::ostream& operator <<(std::ostream& os, const Type& type);

private:
    TypeId typeId_;
};


}
}
}


#endif
