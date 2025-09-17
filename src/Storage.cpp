#include "Storage.hpp"
#include "Meal.hpp"
#include "DiningHall.hpp"

Storage& Storage::instance() {
    static Storage instance;
    return instance;
}