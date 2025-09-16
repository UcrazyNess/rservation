#include <iostream>
#include <string>
#include "Student.hpp"

using namespace std;

Student::Student() : user_id(0), student_id(""), name(""), email(""), balance(0.0f), isactive(false) {}

void Student::print() {
    cout << "Student: " << name << " (" << student_id << ")" << endl;
}

void Student::reserve_meal() {

}

string Student::get_student_id() {
    return student_id;
}

int Student::get_user_id() {
    return user_id;
}

string Student::get_name() {
    return name;
}

string Student::get_email() {
    return email;
}

float Student::get_balance() {
    return balance;
}

bool Student::get_isactive() {
    return isactive;
}