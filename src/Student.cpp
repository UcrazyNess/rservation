#include <iostream>
#include <string>
#include <vector>
#include "User.hpp"
#include "Reservation.hpp"
#include "Student.hpp"

using namespace std;

Student::Student() : email(""), phone(""), balance(0.0), isActive(false) {}

void Student::cancel_Reserve(Reservation res) {
    for (auto it = reservation.begin(); it != reservation.end(); ++it) {
        if (it->get_reservation_id() == res.get_reservation_id()) {
            reservation.erase(it);
            break;
        }
    }
}

void Student::reserve_meal() {
}

bool Student::isactive() {
    return isActive;
}

void Student::activate() {
    isActive = true;
}

void Student::deactivate() {
    isActive = false;
}

string Student::get_email() {
    return email;
}

float Student::get_balance() {
    return balance;
}

string Student::get_Phone() {
    return phone;
}

const Reservation Student::get_reserve(int index) {
    if (index >= 0 && index < reservation.size()) {
        return reservation[index];
    }
    return Reservation();
}

void Student::gettype() {
    cout << "User Type: Student" << endl;
}

void Student::set_email() {
    cout << "Enter email: ";
    cin.ignore();
    getline(cin, email);
}

void Student::set_balance() {
    cout << "Enter balance: ";
    cin >> balance;
}

void Student::set_Phone() {
    cout << "Enter phone: ";
    cin.ignore();
    getline(cin, phone);
}