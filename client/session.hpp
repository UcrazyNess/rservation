#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <cstring>
#include <unistd.h>
#include <iostream>
#include <ctime>

using namespace std ;


class Session
{
public:
    int IsListenig;

    Session(){
        setAddress(AF_INET);
        testClient();
    }
    ~Session(){
        close(clientSocket);
    }
    void setSession (){
        setSocket(SOCK_STREAM , IPPROTO_TCP);
        IsListenig = bind(clientSocket ,finalAddres , (socklen_t) sizeof(Addres));
        if (IsListenig == -1){
            perror("@@@ client socket error @@@ \n resion :");
            close(clientSocket);
            exit(EXIT_FAILURE);
        }
    }
    
private:
    int clientSocket;
    sockaddr_in Addres ;
    sockaddr *finalAddres ;

    void setSocket (int type ,int protocol){
    clientSocket = socket(AF_INET , type ,protocol);
        if( clientSocket == -1 ){
            perror("@@@ client socket error @@@ \n resion :");
            exit(EXIT_FAILURE);
        }        
    }
    void setAddress (int ip){
        Addres.sin_family = ip ;
        Addres.sin_port = htons(8001);
        inet_pton(clientSocket , "127.0.0.1" ,&(Addres.sin_addr.s_addr));
        memset(Addres.sin_zero ,0,8);
        finalAddres = (sockaddr*)&Addres;
    }
    void testClient() {
        setSocket(SOCK_DGRAM , IPPROTO_UDP);
        int testSocekt = bind(clientSocket, finalAddres , (socklen_t) sizeof(Addres));
        if (testSocekt == -1){
            perror("@@@ client socket error @@@ \n resion :");
            close(clientSocket);
            exit(EXIT_FAILURE);
        }
        
    }
};

