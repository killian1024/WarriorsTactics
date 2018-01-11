//
// Created by Killian on 11/01/18.
//

#include "Type.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


Type::Type(TypeId typeId) noexcept
        : typeId_(typeId)
{
}


std::ostream& operator <<(std::ostream& os, const Type& type)
{
    return os << type.typeId_;
}


}
}
}
