#include "session.hpp"

using namespace std ;

int main (){
    Session session;
    session.setSession();
    if (session.IsListenig !=-1)
    {
        cout<<"client is ready";
    }
    
}