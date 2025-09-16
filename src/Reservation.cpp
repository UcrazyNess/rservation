#include <iostream>
#include <ctime>
#include "Reservation.hpp"
#include "DiningHall.hpp"
#include "Meal.hpp"
using namespace std;

Reservation::Reservation() : reservation_id(0), diningHall(nullptr), meal(nullptr), created_at(time(0)), status(accepted) {}

void Reservation::print() {
    cout << "Reservation ID: " << reservation_id << endl;
    cout << "Created at: " << ctime(&created_at);
    cout << "Status: ";
    switch(status) {
        case accepted: cout << "Accepted"; break;
        case ready: cout << "Ready"; break;
        case cooking: cout << "Cooking"; break;
        case eating: cout << "Eating"; break;
    }
    cout << endl;
    if (diningHall != nullptr) {
        diningHall->print();
    }
    if (meal != nullptr) {
        meal->print();
    }
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

DiningHall Reservation::get_diningHall() {
    if (diningHall != nullptr) {
        return *diningHall;
    }
    return DiningHall();
}

time_t Reservation::get_created_at() {
    return created_at;
}

Status Reservation::getStatus() {
    return status;
}

Meal Reservation::getMeal() {
    if (meal != nullptr) {
        return *meal;
    }
    return Meal();
}

void Reservation::setStatus() {
    int choice;
    cout << "Select status: 1) Accepted 2) Ready 3) Cooking 4) Eating: ";
    cin >> choice;
    switch(choice) {
        case 1: status = accepted; break;
        case 2: status = ready; break;
        case 3: status = cooking; break;
        case 4: status = eating; break;
        default: status = accepted;
    }
}

void Reservation::set_reservation_id(int id) {
    reservation_id = id;
}

void Reservation::setDiningHall(DiningHall hall) {
    if (diningHall != nullptr) {
        delete diningHall;
    }
    diningHall = new DiningHall(hall);
}

void Reservation::setMeal(Meal m) {
    if (meal != nullptr) {
        delete meal;
    }
    meal = new Meal(m);
}

void Reservation::set_created_at(time_t time) {
    created_at = time;
}