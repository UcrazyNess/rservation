#pragma once 

#include <iostream>
#include <ctime>

enum TransactionStatus{
    PENDING , FAILED , COMPLETED
};

class Transaction {
    Transaction();
    
    int getTransactionID();
    std::string getTrackingCode();
    float getAmount();
    TransactionStatus getStatus();
    std::time_t getCreatedAt();

    void setTransactionID();
    void setTrackingCode();
    void setAmount();
    void setStatus();
    void setCreatedAt();


private:     
    int transactionID;
    std::string trackingCode;
    float amount;
    TransactionStatus status;
    std::time_t createdAt;
}