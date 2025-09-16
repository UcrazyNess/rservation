#pragma once

#include <future>
#include <iostream>
#include <vector>
#include <string>

enum Meal_type {
    dinner, 
    lunch,
    breakfast
};
enum ReserveDay {
    sat , sun ,mon ,tu ,wed, thu 
};

class Meal {
public:
    Meal();
    void print();
    void update_price(float new_price);
    void add_side_item(std::string item);
    void add_price(float);
    bool isactive();
    void activate();
    void deactivate();
    
    
    void set_meal_id();
    void set_name();
    void set_price();
    void set_item_sides();
    void set_meal_type();
    void set_ReserveDay();


    int get_meal_id();
    Meal_type get_meal_type();
    ReserveDay get_ReserveDay();
    std::string get_name();
    float get_price();
    std::vector<std::string> get_item_sides();

private:    
    int meal_id;
    std::string name;
    float price;
    std::vector<std::string> item_sides; 
    bool isActive ; 
    Meal_type meal_type;
    ReserveDay reserveDay;
};