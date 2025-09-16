#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

class User {
public:
    User();
    void print() const;

    virtual void gettype() ;
    std::string  get_student_id();
    std::string    get_lastName();
    int  get_user_id();
    std::string    get_hashPassword();
    std::string  get_name();

    void    set_student_id();
    void    set_name();
    void    set_lastName();
    void    set_hashPassword();


    
private: 
    int user_id;
    char hashPassword[257];
    std::string   lastName, name   ;
    float balance ;
    bool isActive ;   
};
