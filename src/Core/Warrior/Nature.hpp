//
// Created by Killian on 11/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_NATURE_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_NATURE_HPP

#include <ostream>

#include <kboost/kboost.hpp>

#include "NatureId.hpp"
#include "StatId.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


class Nature
{
public:
    Nature(NatureId natureId) noexcept;
    
    double getMultiplier(StatId statId) const noexcept;
    
    friend std::ostream& operator <<(std::ostream& os, const Nature& nature);

private:
    NatureId natureId_;
};


}
}
}


#endif
