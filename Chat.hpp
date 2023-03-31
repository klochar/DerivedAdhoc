#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>
#include "Animal.hpp"
#include <fstream>
class Chat : public Animal{

public:
    Chat(int,string,int,string);

    friend ostream& operator<<(ostream& o, const Chat& chat){
        return o<<"nbPattes: "<<chat.getNbPatte()<<", nom: "<<chat.getNom()<<", nbYeux: "<<chat.getNbYeux()<<", type: "<<chat.typeChat<<endl;
    }



private:
    std::string typeChat;



};

#endif