#pragma once

#include <iostream>


class Panel {
public:
    void Action(int);
    void showMenu();
    void showStudentInfo();
    void checkBalance();
    void viewReservations();
    void addReservation(Reservation);
    void removeShoppingCartItem();
    void increaseBalance();
    void viewRecentTransactions();
    void cancelReservation(int);
// void viewRecentTransactions();
// void confirmShoppingCart();
// void addToShoppingCart();
    void exit();
private:


};
