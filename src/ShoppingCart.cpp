#include <iostream>
#include "ShoppingCart.hpp"
#include "Reservation.hpp"
using namespace std;

void ShoppingCart::addReservation(Reservation reservation) {
    reservations.push_back(reservation);
}

void ShoppingCart::removeReservation(int ID) {
    vector<Reservation>tmp ;
    for (Reservation reservation : reservations) {
        if (reservation.get_reservation_id() == ID) {
            cout << "---------------------" << endl;            
            reservation.print();
            cout <<"\n" << " {{{{ DELETED }}}}\n";
            cout << "---------------------" << endl;            
        }
        else {
            tmp.push_back(reservation);
        }
        clear();
        reservations = tmp;

    }
}

void ShoppingCart::viewShoppingCartItems() {
    cout << "Shopping Cart Items:" << endl;
    cout << "---------------------" << endl;
    for (Reservation reservation : reservations) {
        reservation.print();
        cout << "---------------------" << endl;
    }
}

void ShoppingCart::clear() {
    reservations.clear();
}

vector<Reservation> ShoppingCart::getReservations() const {
    return reservations;
}