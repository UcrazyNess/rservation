#include <fstream>
#include <iostream>
using namespace std;


int main (){
    fstream activate;
    activate.open("./.activate");
    activate << "0";
    activate.close();
}