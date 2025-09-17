#include <iostream>
#include <ctime>
#include "Transaction.hpp"

using namespace std;

Transaction::Transaction() : transactionID(0), trackingCode(""), amount(0.0f), status(PENDING), createdAt(time(0)) {}

int Transaction::getTransactionID() {
    return transactionID;
}

string Transaction::getTrackingCode() {
    return trackingCode;
}

float Transaction::getAmount() {
    return amount;
}

TransactionStatus Transaction::getStatus() {
    return status;
}

time_t Transaction::getCreatedAt() {
    return createdAt;
}

void Transaction::setTransactionID() {
    cout << "Enter transaction ID: ";
    cin >> transactionID;
}

void Transaction::setTrackingCode() {
    cout << "Enter tracking code: ";
    cin.ignore();
    getline(cin, trackingCode);
}

void Transaction::setAmount() {
    cout << "Enter amount: ";
    cin >> amount;
}

void Transaction::setStatus() {
    int choice;
    cout << "Select status (1: PENDING, 2: FAILED, 3: COMPLETED): ";
    cin >> choice;
    switch(choice) {
        case 1: status = PENDING; break;
        case 2: status = FAILED; break;
        case 3: status = COMPLETED; break;
        default: status = PENDING;
    }
}

void Transaction::setCreatedAt() {
    cout << "Enter creation time (Unix timestamp): ";
    cin >> createdAt;
}