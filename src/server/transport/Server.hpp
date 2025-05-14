#define SERVER_HPP

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include  <unistd.h>
#include <iostream>
#include <cstring>
using namespace  std ;

class Server
{
public:
    int IsListening ;
    Server(){
        finalAddres =  (struct sockaddr*)&Addres ;
        makeAddres();
        testServer();
    }
    
    void testServer (){
        makeSocket( SOCK_DGRAM, IPPROTO_UDP );
        IsListening = bind(server_socket , finalAddres , (size_t )sizeof(Addres));
        if (IsListening == -1) {
            perror(  "@@@ server errore @@@ \n  in socket \n reson :"); 
            exit(EXIT_FAILURE);
        }
        
    } 
    void runServer (){
        makeSocket( SOCK_STREAM, IPPROTO_TCP );
        IsListening = bind(server_socket , finalAddres , (size_t )sizeof(Addres));
        if (IsListening == -1) {
            perror(  "@@@ server errore @@@ \n  in socket \n reson :"); 
            exit(EXIT_FAILURE);
        }

    }
    ~Server(){
        close(server_socket);
    }

private:
int server_socket ;
    struct sockaddr_in Addres ;
    struct sockaddr *finalAddres ;

    void makeSocket (int type , int protocol ){
        server_socket = socket(AF_INET , type , protocol);
        if( server_socket == -1 )
        {
            perror(  "@@@ server errore @@@ \n  in socket \n reson :"); 
            exit(EXIT_FAILURE);
        }
    }
    
    void makeAddres (){
        Addres.sin_family = AF_INET;
        Addres.sin_port = htons(8080);
        inet_pton(AF_INET , "127.0.0.1" , &(Addres.sin_addr.s_addr) );
        memset(Addres.sin_zero,0,8);
    }
};




