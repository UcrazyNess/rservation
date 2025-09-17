#include <iostream>
#include <ctime>
#include "Sessions.hpp"
#include "ShoppingCart.hpp"
#include "Student.hpp"

using namespace std;

// SessionBase implementations
time_t SessionBase::getCreatedAt() {
    return createdAt;
}

time_t SessionBase::getLasttimeLogin() {
    return lasttimeLogin;
}

SessionStatus SessionBase::getStatus() {
    return status;
}

void SessionBase::setCreatedAt() {
    createdAt = time(0);
}

void SessionBase::setLasttimeLogin() {
    lasttimeLogin = time(0);
}

void SessionBase::setStatus() {
    int choice;
    cout << "Select status (1: AUTHENTICATED, 2: ANONYMOUS): ";
    cin >> choice;
    status = (choice == 1) ? AUTHENTICATED : ANONYMOUS;
}

// AdminSession implementations
namespace AdminSession {

SessionManager SessionManager::instance() {
    static SessionManager Instance;
    return Instance;
}

// void SessionManager::load_session() {
// }

// void SessionManager::save_session() {
// }

// void SessionManager::login(string username, string password) {
//     setLasttimeLogin();
//     status = AUTHENTICATED;
// }

// void SessionManager::logout() {
//     status = ANONYMOUS;
    // save_session();
// }

Student SessionManager::currentAdmin() {
    if (current_admin != nullptr) {
        return *current_admin;
    }
    return Student();
}

ShoppingCart SessionManager::shoppingCart() {
    if (shopping_cart != nullptr) {
        return *shopping_cart;
    }
    return ShoppingCart();
}

int SessionManager::getAdminID() {
    return studentID;
}

void SessionManager::setCurrentAdmin() {
    if (current_admin != nullptr) {
        delete current_admin;
    }
    current_admin = new Student();
    current_admin->set_name();
    current_admin->set_lastName();
}

void SessionManager::setShopping_cart() {
    if (shopping_cart != nullptr) {
        delete shopping_cart;
    }
    shopping_cart = new ShoppingCart();
}

void SessionManager::stAdminID() {
    cout << "Enter admin ID: ";
    cin >> studentID;
}

}

// StudentSession implementations
namespace StudentSession {

SessionManager SessionManager::instance() {
    static SessionManager instance;
    return instance;
}

// void SessionManager::load_session() {
// }

// void SessionManager::save_session() {
// }

// void SessionManager::login(string username, string password) {
//     setLasttimeLogin();
//     status = AUTHENTICATED;
// }

// void SessionManager::logout() {
//     status = ANONYMOUS;
    // save_session();
// }

Student SessionManager::currentStudent() {
    if (current_student != nullptr) {
        return *current_student;
    }
    return Student();
}

ShoppingCart SessionManager::shoppingCart() {
    if (shopping_cart != nullptr) {
        return *shopping_cart;
    }
    return ShoppingCart();
}

int SessionManager::getStudentID() {
    return studentID;
}

void SessionManager::setCurrent_student() {
    if (current_student != nullptr) {
        delete current_student;
    }
    current_student = new Student();
    current_student->set_name();
    current_student->set_lastName();
}

void SessionManager::setShopping_cart() {
    if (shopping_cart != nullptr) {
        delete shopping_cart;
    }
    shopping_cart = new ShoppingCart();
}

void SessionManager::stStudentID() {
    cout << "Enter student ID: ";
    cin >> studentID;
}

}