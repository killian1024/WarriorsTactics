//
// Created by Killian on 11/01/18.
//

#ifndef WARRIORS_TACTICS_CORE_WARRIOR_MOVE_HPP
#define WARRIORS_TACTICS_CORE_WARRIOR_MOVE_HPP

#include <kboost/kboost.hpp>

#include "MoveId.hpp"
#include "MoveCategoryId.hpp"
#include "Type.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


class Move
{
public:
    Move(MoveId moveId) noexcept;
    
    void print(std::ostream& os, kios::indentation& indent) const;

private:
    MoveCategoryId getOriginalMoveCategoryId() const noexcept;
    
    Type getOriginalType() const noexcept;
    
    std::uint32_t getOriginalPower() const noexcept;

private:
    MoveId moveId_;
    
    MoveCategoryId moveCategoryId_;
    
    Type type_;
    
    std::uint32_t power_;
};


}
}
}


#endif
