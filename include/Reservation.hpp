#pragma once

#include <iostream>
#include <ctime>
#include "Student.hpp"
#include "DiningHall.hpp"
#include "Meal.hpp"


enum status {
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
    Student get_student();
    DiningHall get_diningHall();
    std::time_t get_created_at();
    void set_reservation_id(int);
    void set_student(Student );
    void set_diningHall(DiningHall );
    void set_created_at(time_t );
private:
    int reservation_id ;
    Student student;
    DiningHall diningHall;
    std::time_t created_at;

};