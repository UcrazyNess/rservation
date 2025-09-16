#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "User.hpp"
using namespace std;

User::User() : user_id(0), lastName(""), name(""), balance(0.0), isActive(false) {

}

void User::print() const {
    cout << "User ID: " << user_id << endl;
    cout << "Name: " << name << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Balance: " << balance << endl;
    cout << "Active: " << (isActive ? "Yes" : "No") << endl;
}

void User::gettype() {
    cout << "User Type: Base User" << endl;
}

string User::get_student_id() {
    return "";
}

string User::get_lastName() {
    return lastName;
}

int User::get_user_id() {
    return user_id;
}

string User::get_hashPassword() {
    return string(hashPassword);
}

string User::get_name() {
    return name;
}

void User::set_student_id() {
}

void User::set_name() {
    cout << "Enter name: ";
    cin>> name;
}

void User::set_lastName() {
    cout << "Enter last name: ";
    cin >>lastName;
}

void User::set_hashPassword() {

}