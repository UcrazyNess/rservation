#include "Panel.hpp" 
#include <iostream>
#include "Reservation.hpp"

using namespace std;

void Panel::Action(int choice) {
    switch(choice) {
        case 1:
            showStudentInfo();
            break;
        case 2:
            checkBalance();
            break;
        case 3:
            viewReservations();
            break;
        case 4:
            break;
        case 5:
            removeShoppingCartItem();
            break;
        case 6:
            increaseBalance();
            break;
        case 7:
            viewRecentTransactions();
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 0:
            exit();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}

void Panel::showMenu(){
    cout << "====================================" << endl;
    cout << "            MENU PANEL           " << endl;
    cout << "====================================" << endl;
    cout << "1. View Student Information" << endl;
    cout << "2. Check Balance" << endl;
    cout << "3. View Reservations" << endl;
    cout << "4. Add Reservation" << endl;
    cout << "5. Remove Shopping Cart Item" << endl;
    cout << "6. Increase Balance" << endl;
    cout << "7. View Recent Transactions" << endl;
    cout << "8. Cancel Reservation" << endl;
    cout << "9. Confirm Shopping Cart" << endl;
    cout << "10. Add to Shopping Cart" << endl;
    cout << "0. Exit" << endl;
    cout << "====================================" << endl;
    cout << "Please enter your choice: ";
}

void Panel::showStudentInfo(){
    cout << "Student Information:" << endl;
    cout << "-------------------" << endl;
}

void Panel::checkBalance(){
    cout << "Current Balance:" << endl;
    cout << "----------------" << endl;
}

void Panel::viewReservations(){
    cout << "Your Reservations:" << endl;
    cout << "------------------" << endl;
}

void Panel::addReservation(Reservation res){
}

void Panel::removeShoppingCartItem(){
    cout << "Remove Shopping Cart Item:" << endl;
    cout << "--------------------------" << endl;
}

void Panel::increaseBalance(){
    cout << "Increase Balance:" << endl;
    cout << "-----------------" << endl;
}

void Panel::viewRecentTransactions(){
    cout << "Recent Transactions:" << endl;
    cout << "-------------------" << endl;
}

void Panel::cancelReservation(int id){
}

void Panel::exit(){
    cout << "Exiting program..." << endl;
}