cmake_minimum_required(VERSION 3.21)
project(CodingABLATE)

set(CMAKE_CXX_STANDARD 17)

## Add a separate executable for each day of the project
add_executable(day1 day1/main.cpp day12/MessingWtihReferences.cpp)
add_executable(day2 day2/Motto.cpp day2/Calculator.cpp)
add_executable(day3 day3/Sizer.cpp day3/AmericanFootball.cpp day3/RectangularPrism.cpp)
add_executable(day4 day4/Grader.cpp day4/Grader.cpp)
add_executable(day5 day5/MathPlusPlus.cpp)
add_executable(day6 day6/FizzBuzz.cpp)
add_executable(day7 day7/WeightGoals.cpp)
add_executable(day8 day8/LunarLander.cpp)
add_executable(day9 day9/Point.h day9/Rectangle.cpp)
add_executable(day10 day10/MessingWithPointers.cpp)
add_executable(day12 day12/MessingWtihReferences.cpp)
add_executable(day13 day13/CopyConstructors.cpp day13/SimpleEvent.cpp)
## This is a commented out example for day2
#add_executable(day2 day2/main.cpp)