#define SERVER_HPP

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include  <unistd.h>
#include <iostream>
#include <cstring>

using namespace std ;

class clientHandeller 
{
public:
    clientHandeller(int &ListeningSocket): ServSocket(ListeningSocket){
        
    }
    
private:
    static unsigned long  clientNumbers ;
    int &ServSocket ;
};

