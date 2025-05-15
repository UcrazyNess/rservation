#pragma once

#include <sys/select.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include  <unistd.h>
#include <iostream>
#include <cstring>
#include <ctime>

using namespace std ;

enum class requestType{
    read ,
    write, 
    expetion,

};
class clientHandeller 
{
public:
    unsigned long  clientNumber ;

    clientHandeller(const int &ListeningSocket): ServSocket(ListeningSocket){
        clientNumber =0 ;
        clientSocket = new int[SOMAXCONN+1];
    }
    ~clientHandeller(){
        for (unsigned int i = 0; i < clientNumber  ; i++)
        {
            close(clientSocket[i]);
        }
        delete [] clientSocket;
        
    }
    bool checkRequest(requestType request ,int mSecWait){
        int isRequest ;
        timeval wait ;
        wait.tv_sec=0 ;
        wait.tv_usec=  mSecWait *1000 ;
        FD_ZERO(&fdRequest);
        FD_SET(ServSocket, &fdRequest);
        cout << "waiting for request";
        switch (request)
        {
        case requestType::read:
            isRequest = select(ServSocket+1 ,&fdRequest , NULL , NULL , &wait);
            break;
        case requestType::write:
            isRequest = select(ServSocket+1  , NULL ,&fdRequest , NULL , &wait);
            break;
        case requestType::expetion:
            isRequest = select(ServSocket+1  , NULL , NULL , &fdRequest , &wait);
            break;
        
        default:
            cerr<<"invalid request type";
            exit(EXIT_FAILURE);
        };
        if (isRequest==-1){
            perror("@@@@cant select@@@");
        }
        return isRequest >0; 
    }
    bool acceptClient(){
        if (clientNumber >= SOMAXCONN){
            cerr << "@@@ Server Traffic Error @@@\nToo many clients connected.\n";
            return -1;
        }
        clientSocket[clientNumber]= accept(ServSocket , NULL,NULL  );
        if (clientSocket[clientNumber] == -1){
            perror("accept failed");
            cerr << "\n@@@ client can't connect @@@";
            return false;
        }
        cout<<"client :[" << clientSocket[clientNumber] << "] conected" ;
        return true;

    }
private:
    fd_set fdRequest ;
    const int &ServSocket ;
    int * clientSocket ;
};

