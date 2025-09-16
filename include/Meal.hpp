#pragma once

#include <future>
#include <iostream>
#include <vector>
#include <string>

enum meal_type {
    dinner, 
    lunch,
    breakfast
};

class Meal {
public:
    Meal();
    void print();
    void update_price(float new_price);
    void add_side_item(std::string item); 
    void set_meal_id();
    void set_name();
    void set_price();
    void set_item_sides();
    int get_meal_id();
    std::string get_name();
    float get_price();
    std::vector<std::string> get_item_sides();

private:    
    int meal_id;
    std::string name;
    float price;
    std::vector<std::string> item_sides;  
};