//
// Created by Killian on 10/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_DETAILS_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_DETAILS_HPP

#include <string>
#include <ostream>

#include <kboost/kboost.hpp>

#include "WarriorId.hpp"
#include "Type.hpp"
#include "Gender.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


class Details
{
public:
    Details(
            WarriorId warriorId,
            std::string nickname,
            std::uint32_t happiness,
            bool shiny
    );
    
    const Type& getType1() const noexcept;
    
    const Type& getType2() const noexcept;
    
    const Gender& getGender() const noexcept;
    
    void print(std::ostream& os, kios::indentation& indent) const;

private:

private:
    WarriorId warriorId_;
    
    std::string nickname_;
    
    // ItemId itemId_;
    
    // AbilityId abilityId_;
    
    std::uint32_t happiness_;
    
    bool shiny_;
};


}
}
}


#endif
