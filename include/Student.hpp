#pragma once

#include <iostream>
#include <string>


class Student {
public:
    Student();
    void print() ;
    void reserve_meal();
    std::string  get_student_id();
    int  get_user_id();
    std::string  get_name();
    std::string  get_email();
    float  get_balance();
    bool  get_isactive();
private: 
    int user_id;
    std::string  student_id , name , email;
    float balance ;
    bool isactive ;
    
};
