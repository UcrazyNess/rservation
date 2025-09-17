#pragma once

#include <iostream>
#include "Reservation.hpp"
class ShoppingCart {
public:
    // Transaction confirm()
    void addReservation(Reservation reservation);
    void removeReservation(int ID);
    void viewShoppingCartItems();
    void clear();
    std::vector<Reservation> getReservations()  const;

private:
    std::vector<Reservation> reservations;

};