#include "transport/Server.hpp"
#include "transport/clientHandeller.hpp"
#include <fstream>

using namespace std;

bool checkActivitie(){
    fstream activate;
    activate.open("./.activate");
    bool active = ((int) activate.get())-48;
    activate.close();
    return(active);
    
}

int main()
{
    Server server;
    server.runServer();
    clientHandeller cliHan(server.getSocket());
    while (checkActivitie())
    {
        if (cliHan.checkRequest(requestType ::read, 50))
        {
            cliHan.acceptClient();
        }
    }
}