#include <iostream>
#include <ctime>
#include "Student.hpp"
#include "DiningHall.hpp"
#include "Meal.hpp"
#include "Reservation.hpp"

using namespace std;

Reservation::Reservation() : reservation_id(0), created_at(time(0)) {}

void Reservation::print() {
    cout << "Reservation ID: " << reservation_id << endl;
    cout << "Created at: " << ctime(&created_at);
    student.print();
    diningHall.print();
}

bool Reservation::cancel() {
    time_t now = time(0);
    double diff = difftime(now, created_at);
    if (diff < 3600) {
        return true;
    } else {
        return false;
    }
}

int Reservation::get_reservation_id() {
    return reservation_id;
}

Student Reservation::get_student() {
    return student;
}

DiningHall Reservation::get_diningHall() {
    return diningHall;
}

time_t Reservation::get_created_at() {
    return created_at;
}

void Reservation::set_reservation_id(int in_reservation_id) {
    reservation_id = in_reservation_id;
}

void Reservation::set_student(Student in_student) {
    student = in_student;
}

void Reservation::set_diningHall(DiningHall in_diningHall) {
    diningHall = in_diningHall;
}

void Reservation::set_created_at(time_t in_created_at) {
    created_at = in_created_at;
}