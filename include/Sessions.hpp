#pragma  once

#include   <iostream>
#include <ctime>
#include "ShoppingCart.hpp"
#include "Student.hpp"

enum SessionStatus{
    AUTHENTICATED,
    ANONYMOUS
};

class SessionBase {

    virtual void login(std::string, std::string)  =0;
    virtual void logout()  =0;

    time_t  getCreatedAt();
    time_t  getLasttimeLogin();
    SessionStatus  getStatus();

    void setCreatedAt();
    void setLasttimeLogin();
    void setStatus();

protected:
    time_t createdAt , lasttimeLogin;
    SessionStatus status;
    virtual void load_session()  =0;
    virtual void save_session()  =0;
};

namespace AdminSession{
class SessionManager : public SessionBase{

    // void load_session() : override
    // void save_session() : override
    // void login(string, string) : override
    // void logout() : override
    Student currentAdmin();
    ShoppingCart shoppingCart();
    static SessionManager instance();
    
    int getAdminID();


    void setCurrentAdmin();
    void setShopping_cart();
    void stAdminID();
    
private:    
    Student *current_admin;
    ShoppingCart *shopping_cart;
    int studentID;

};
}
namespace StudentSession{
class SessionManager : public SessionBase{

    // void load_session() : override
    // void save_session() : override
    // void login(string, string) : override
    // void logout() : override
    Student currentStudent();
    ShoppingCart shoppingCart();
    static SessionManager instance();

    int getStudentID();

    
    void setCurrent_student();
    void setShopping_cart();
    void stStudentID();

private:    
    Student *current_student;
    ShoppingCart *shopping_cart;
    int studentID;
};
}