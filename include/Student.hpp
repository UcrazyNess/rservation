#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Reservation.hpp"
#include "User.hpp"

class Student :public User{
public:
    Student();

    void cancel_Reserve(Reservation); 
    void reserve_meal();
    bool    isactive();
    void    activate();
    void    deactivate();
    
    std::string  get_email();
    float   get_balance();
    std::string  get_Phone();
    const Reservation get_reserve(int); 
    void    gettype() override ;
    void    set_email();
    void    set_balance();
    void    set_Phone();
    
private: 
    std::vector<Reservation> reservation;
    std::string   email ,phone ;
    float balance ;
    bool isActive ;   
};
