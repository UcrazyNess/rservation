#pragma once

#include "DiningHall.hpp"
#include "Meal.hpp"
#include <iostream>
#include <vector>

class Storage {
public:
    Storage()=default;
    Storage(const Storage&) =delete;
    Storage operator=(const Storage&) =delete;
    static Storage& instance(); 


private:
    int mealIDCount , diningHallIDCount;
    std::vector<Meal> allMeal;
    std::vector<DiningHall> allDiningHalls;
};