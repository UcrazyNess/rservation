#include <iostream>
#include "DiningHall.hpp"

using namespace std;

DiningHall::DiningHall() : name(""), hall_id(0), address(""), capacity(0) {}

void DiningHall::print() {
    cout << "Hall ID: " << hall_id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Capacity: " << capacity << endl;
}

void DiningHall::set_name() {
    cout << "Enter name: ";
    cin >> name ;
}

void DiningHall::set_hall_id() {
    cout << "Enter hall ID: ";
    cin >> hall_id;
}

void DiningHall::set_address() {
    cout << "Enter address: ";
    cin >> address ;
}

void DiningHall::set_capacity() {
    cout << "Enter capacity: ";
    cin >> capacity;
}

int DiningHall::get_hall_id() {
    return hall_id;
}

string DiningHall::get_name() {
    return name;
}

string DiningHall::get_address() {
    return address;
}

float DiningHall::get_capacity() {
    return capacity;
}