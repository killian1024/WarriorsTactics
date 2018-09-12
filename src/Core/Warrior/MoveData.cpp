//
// Created by Killian on 11/01/18.
//

#include "MoveData.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


MoveData::MoveData(MoveId moveId) noexcept
        : moveId_(moveId)
        , moveCategoryId_(getOriginalMoveCategoryId())
        , type_(getOriginalType())
        , power_(getOriginalPower())
{
}


void MoveData::print(std::ostream& os, kios::indentation& indent) const
{
    indent++;
    
    os << indent << "moveId_ : " << moveId_ << kios::newl
       << indent << "moveCategoryId_ : " << moveCategoryId_ << kios::newl
       << indent << "type_ : " << type_ << kios::newl
       << indent << "power_ : " << power_ << kios::newl;
    
    indent--;
}


MoveCategoryId MoveData::getOriginalMoveCategoryId() const noexcept
{
    switch (moveId_)
    {
        case MoveId::NIL:
            return MoveCategoryId::NIL;
        
        case MoveId::BOOMBURST:
            return MoveCategoryId::SPECIAL;
        
        case MoveId::HYDRO_PUMP:
            return MoveCategoryId::SPECIAL;
        
        case MoveId::ICE_BEAM:
            return MoveCategoryId::SPECIAL;
        
        case MoveId::SING:
            return MoveCategoryId::STATUS;
    }
}


Type MoveData::getOriginalType() const noexcept
{
    switch (moveId_)
    {
        case MoveId::NIL:
            return TypeId::NIL;
        
        case MoveId::BOOMBURST:
            return TypeId::NORMAL;
        
        case MoveId::HYDRO_PUMP:
            return TypeId::WATER;
        
        case MoveId::ICE_BEAM:
            return TypeId::ICE;
        
        case MoveId::SING:
            return TypeId::NORMAL;
    }
}


std::uint32_t MoveData::getOriginalPower() const noexcept
{
    switch (moveId_)
    {
        case MoveId::NIL:
            return 0;
        
        case MoveId::BOOMBURST:
            return 140;
        
        case MoveId::HYDRO_PUMP:
            return 110;
        
        case MoveId::ICE_BEAM:
            return 90;
        
        case MoveId::SING:
            return 0;
    }
}


}
}
}
