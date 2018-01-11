//
// Created by Killian on 10/01/18.
//

#include "Details.hpp"


namespace WarriorsTactics {
namespace Core {
namespace Warrior {


Details::Details(
        WarriorId warriorId,
        std::string nickname,
        std::uint32_t happiness,
        bool shiny
)
        : warriorId_(warriorId)
        , nickname_(std::move(nickname))
        , happiness_(happiness)
        , shiny_(shiny)
{
    if (nickname_.length() > 10)
    {
        nickname_.erase(10, std::string::npos);
    }
    
    if (happiness_ > 255)
    {
        happiness_ = 255;
    }
}


const Type& Details::getType1() const noexcept
{
    static Type type1(TypeId::NIL);
    
    switch (warriorId_)
    {
        case WarriorId::NIL:
            type1 = Type(TypeId::NIL);
            break;
        
        case WarriorId::AZURA:
            type1 = Type(TypeId::FAIRY);
            break;
    }
    
    return type1;
}


const Type& Details::getType2() const noexcept
{
    static Type type2(TypeId::NIL);
    
    switch (warriorId_)
    {
        case WarriorId::NIL:
            type2 = Type(TypeId::NIL);
            break;
        
        case WarriorId::AZURA:
            type2 = Type(TypeId::WATER);
            break;
    }
    
    return type2;
}


const Gender& Details::getGender() const noexcept
{
    static Gender gender(GenderId::NIL);
    
    switch (warriorId_)
    {
        case WarriorId::NIL:
            gender = Gender(GenderId::NIL);
            break;
        
        case WarriorId::AZURA:
            gender = Gender(GenderId::FEMALE);
            break;
    }
    
    return gender;
}


void Details::print(std::ostream& os, kios::indentation& indent) const
{
    indent++;
    
    os << indent << "nickname_ : " << nickname_ << kios::newl
       << indent << "type1_ : " << getType1() << kios::newl
       << indent << "type2_ : " << getType2() << kios::newl
       << indent << "gender_ : " << getGender() << kios::newl
       << indent << "happiness_ : " << happiness_ << kios::newl
       << indent << "shiny_ : " << shiny_ << kios::newl;
    
    indent--;
}


}
}
}
