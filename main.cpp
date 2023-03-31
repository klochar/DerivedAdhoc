#include <iostream>
#include <memory>
#include "Animal.hpp"
#include "Chat.hpp"

using namespace std;

//polymorph ad-hoc
int main () {
    Chat c1 = Chat(4,"minou",2,"gentil");
    cout<<c1;


    return 0;
}