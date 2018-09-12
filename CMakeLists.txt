cmake_minimum_required(VERSION 3.9)

project(WarriorsTactics)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

set(SOURCE_FILES
        src/main.cpp
        src/Core/Warrior/WarriorInstance.cpp
        src/Core/Warrior/WarriorInstance.hpp
        src/Core/Warrior/Stats.cpp
        src/Core/Warrior/Stats.hpp
        src/Core/Warrior/Moves.cpp
        src/Core/Warrior/Moves.hpp
        src/Core/Warrior/Details.cpp
        src/Core/Warrior/Details.hpp
        src/Core/Warrior/TypeId.hpp
        src/Core/Warrior/TypeId.cpp
        src/Core/Warrior/WarriorId.hpp
        src/Core/Warrior/WarriorId.cpp
        src/Core/Warrior/Gender.hpp
        src/Core/Warrior/Gender.cpp
        src/Core/Warrior/StatsValues.cpp
        src/Core/Warrior/StatsValues.hpp
        src/Core/Warrior/StatId.hpp
        src/Core/Warrior/Nature.cpp
        src/Core/Warrior/Nature.hpp
        src/Core/Warrior/MoveData.cpp
        src/Core/Warrior/MoveData.hpp
        src/Core/Warrior/MoveCategoryId.hpp
        src/Core/Warrior/NatureId.cpp 
        src/Core/Warrior/NatureId.hpp
        src/Core/Warrior/MoveId.cpp 
        src/Core/Warrior/MoveId.hpp 
        src/Core/Warrior/Type.cpp 
        src/Core/Warrior/Type.hpp 
        src/Core/Warrior/MoveCategoryId.cpp 
        src/Core/Warrior/GenderId.cpp 
        src/Core/Warrior/GenderId.hpp
        src/Core/Warrior/WarriorData.cpp src/Core/Warrior/WarriorData.hpp)

add_executable(WarriorsTactics ${SOURCE_FILES})

target_link_libraries(WarriorsTactics -lkboost)
