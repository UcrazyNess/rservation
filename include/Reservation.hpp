#pragma once

#include "DiningHall.hpp"
#include "Meal.hpp"
#include <iostream>
#include <ctime>




enum Status {
    accepted,
    ready,
    cooking,
    eating
};
class Reservation {
public:
    Reservation();
    void print();
    bool cancel();  

    int get_reservation_id();
    DiningHall get_diningHall();
    std::time_t get_created_at();
    Status getStatus();
    Meal getMeal();


    void setStatus();
    void set_reservation_id(int);
    void setDiningHall(DiningHall );
    void setMeal(Meal );
    void set_created_at(time_t );

private:
    int reservation_id ;
    DiningHall *diningHall;
    Meal *meal;
    std::time_t created_at;
    Status status;

};