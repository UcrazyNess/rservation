#pragma once

#include <iostream>




class DiningHall  {

public:

    DiningHall();
    void print();
    void set_name();
    void set_hall_id();
    void set_address();
    void set_capacity();
    int get_hall_id();
    std::string get_name();
    std::string get_address();
    float get_capacity();
private:
    std::string name;  
    int hall_id;
    std::string address;
    int capacity;  

};